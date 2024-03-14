from collections import defaultdict
from typing import Optional

from src.tintas.action import TintasAction
from src.tintas.result import TintasResult
from src.state import State


class TintasState(State):
    EMPTY_CELL = -1

    def __init__(self, num: int):
        super().__init__()

        """
        the dimensions of the board
        """
        self.__num = num

        """
        the grid
        """
        self.__grid = [[TintasState.EMPTY_CELL for _i in range(self.__num)] for _j in range(self.__num)]

        """
        counts the number of turns in the current game
        """
        self.__turns_count = 1

        """
        the index of the current acting player
        """
        self.__acting_player = 0

        """
        determine if a winner was found already 
        """
        self.__has_winner = False

"""
    def __check_winner(self, player):
        # check for 4 across
        for row in range(0, self.__num):
            for col in range(0, self.__num - 3):
                if self.__grid[row][col] == player and \
                        self.__grid[row][col + 1] == player and \
                        self.__grid[row][col + 2] == player and \
                        self.__grid[row][col + 3] == player:
                    return True

        # check for 4 up and down
        for row in range(0, self.__num - 3):
            for col in range(0, self.__num):
                if self.__grid[row][col] == player and \
                        self.__grid[row + 1][col] == player and \
                        self.__grid[row + 2][col] == player and \
                        self.__grid[row + 3][col] == player:
                    return True

        # check upward diagonal
        for row in range(3, self.__num):
            for col in range(0, self.__num - 3):
                if self.__grid[row][col] == player and \
                        self.__grid[row - 1][col + 1] == player and \
                        self.__grid[row - 2][col + 2] == player and \
                        self.__grid[row - 3][col + 3] == player:
                    return True

        # check downward diagonal
        for row in range(0, self.__num - 3):
            for col in range(0, self.__num - 3):
                if self.__grid[row][col] == player and \
                        self.__grid[row + 1][col + 1] == player and \
                        self.__grid[row + 2][col + 2] == player and \
                        self.__grid[row + 3][col + 3] == player:
                    return True

        return False
"""


    def __check_winner(self, player):
        color_counts = defaultdict(int)
        for row in self.state.board:
            for chip in row:
                if chip is not None:
                    color_counts[chip.color] += 1

        for color, count in color_counts.items():
            if count == self.state.board_size and color in player.chips:
                # player has all chips of one color, return True
                return True

        num_colors = len(color_counts)
        if num_colors < 4:
            return False
        sorted_counts = sorted(color_counts.values(), reverse=True)

        # check if the player has majority of 4 colors
        if sorted_counts[0] >= 1 and sorted_counts[1] >= 1 and sorted_counts[2] >= 1 and sorted_counts[3] >= 1:
            top_colors = [color for color, count in color_counts.items() if count == sorted_counts[0]]
            if all(color in player.chips for color in top_colors):
                return True

        # no winner yet
        return False

    def get_grid(self):
        return self.__grid

    def get_num_players():
        return 2

    def validate_action(self, action: TintasAction) -> bool:
        # extract the start and end coordinates of the action
        start_row, start_col = action.get_start_row(), action.get_start_col()
        end_row, end_col = action.get_end_row(), action.get_end_col()

        # check if the start and end coordinates are within the bounds of the grid
        if not (0 <= start_row < self.__num_rows and 0 <= start_col < self.__num_cols and
                0 <= end_row < self.__num_rows and 0 <= end_col < self.__num_cols):
            return False

        # check if the start and end coordinates are the same or diagonal
        if start_row == end_row or start_col == end_col or abs(start_row - end_row) != abs(start_col - end_col):
            return False

        # check if there is a straight line path from the start to the end that does not cross over occupied cells
        if start_col == end_col:
            start, end = min(start_row, end_row), max(start_row, end_row)
            for row in range(start+1, end):
                if self.__grid[row][start_col] != TintasState.EMPTY_CELL:
                    return False
        elif start_row == end_row:
            start, end = min(start_col, end_col), max(start_col, end_col)
            for col in range(start+1, end):
                if self.__grid[start_row][col] != TintasState.EMPTY_CELL:
                    return False
        else:
            if start_col < end_col:
                start_row, start_col, end_row, end_col = end_row, end_col, start_row, start_col
            row, col = start_row, start_col
            while row != end_row:
                if self.__grid[row][col] != TintasState.EMPTY_CELL:
                    return False
                if start_col > end_col:
                    col -= 1
                else:
                    col += 1
                if start_row > end_row:
                    row -= 1
                else:
                    row += 1

        return True
"""
    def validate_action(self, action: TintasAction) -> bool:
        col = action.get_col()

        # valid column
        if col < 0 or col >= self.__num:
            return False

        # full column
        if self.__grid[0][col] != TintasState.EMPTY_CELL:
            return False

        return True
"""


    def update(self, action: TintasAction):
        col = action.get_col()

        # drop the checker
        for row in range(self.__num - 1, -1, -1):
            if self.__grid[row][col] < 0:
                self.__grid[row][col] = self.__acting_player
                break

        # determine if there is a winner
        self.__has_winner = self.__check_winner(self.__acting_player)

        # switch to next player
        self.__acting_player = 1 if self.__acting_player == 0 else 0

        self.__turns_count += 1

    def __display_cell(self, row, col):
        print({
            0:                              'R',
            1:                              'B',
            TintasState.EMPTY_CELL:       ' '
        }[self.__grid[row][col]], end="")

    def __display_numbers(self):
        for col in range(0, self.__num):
            if col < 10:
                print(' ', end="")
            print(col, end="")
        print("")

    def __display_separator(self):
        for col in range(0, self.__num):
            print("--", end="")
        print("-")

    def display(self):
        self.__display_numbers()
        self.__display_separator()

        for row in range(0, self.__num):
            print('|', end="")
            for col in range(0, self.__num):
                self.__display_cell(row, col)
                print('|', end="")
            print("")
            self.__display_separator()

        self.__display_numbers()
        print("")

    def __is_full(self):
        return self.__turns_count > (self.__num * self.__num)

    def is_finished(self) -> bool:
        return self.__has_winner or self.__is_full()

    def get_acting_player(self) -> int:
        return self.__acting_player

    def clone(self):
        cloned_state = TintasState(self.__num)
        cloned_state.__turns_count = self.__turns_count
        cloned_state.__acting_player = self.__acting_player
        cloned_state.__has_winner = self.__has_winner
        for row in range(0, self.__num):
            for col in range(0, self.__num):
                cloned_state.__grid[row][col] = self.__grid[row][col]
        return cloned_state

    def get_result(self, pos) -> Optional[TintasResult]:
        if self.__has_winner:
            return TintasResult.LOOSE if pos == self.__acting_player else TintasResult.WIN
        if self.__is_full():
            return TintasResult.DRAW
        return None

    def get_num_rows(self):
        return self.__num

    def get_num_cols(self):
        return self.__num

    def before_results():
        pass