import random

from src.tintas.player import TintasPlayer
from src.tintas.state import TintasState
from src.game_simulator import GameSimulator
from collections import Counter


class TintasSimulator(GameSimulator):
    class TintasSimulator:
        def __init__(self, player1: TintasPlayer, player2: TintasPlayer, __num: int):
            super(TintasSimulator, self).__init__([player1, player2])

            """
            the number of rows and columns for the Tintas grid
            """
            self.__num = 7

            """
            initialize the board with randomly-selected chip colors
            """
            self.__board = [[None for _ in range(self.__num)] for _ in range(self.__num)]
            colors = ['red', 'blue', 'green', 'yellow', 'purple', 'orange', 'black']
            color_counter = Counter()
            for i in range(self.__num):
                for j in range(self.__num):
                    valid_colors = [color for color in colors if color_counter[color] < 7]
                    color = random.choice(valid_colors)
                    self.__board[i][j] = color
                    color_counter[color] += 1

            """
            initialize the players with empty chip collections
            """
            self.__players = [player1, player2]
            for player in self.__players:
                # TODO
                player.reset()

    def init_game(self):
        # TODO
        return TintasState(self, self.__num)

    def before_end_game(self, state: TintasState):
        # ignored for this simulator
        pass

    def end_game(self, state: TintasState):
        # ignored for this simulator
        pass
