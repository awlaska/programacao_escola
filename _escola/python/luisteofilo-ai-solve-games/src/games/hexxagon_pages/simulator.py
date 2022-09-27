from action import HexxagonAction
from state import gamestate
from troca_jog import troca_jog
from jogada_pc import jogada_pc
from fim_jogo import fim_jogo
from result import results
from jogadas_validas_total import jogadas_validas_total
from finaliza import finaliza
from conta_pecas import conta_pecas

import carrega_tabul

def simulator():
    HexxagonAction.jog = 1
    carrega_tabul(tabuleiro)
    running = True

    while running:

        if jogadas_validas_total(HexxagonAction.jog) == 0:
            gamestate.nMovs += 1
            HexxagonAction.jog = troca_jog(HexxagonAction.jog)

        if gamestate.nMovs % 2 != 1:
            jogada_pc()
            gamestate.nMovs += 1
            HexxagonAction.jog = troca_jog(HexxagonAction.jog)
        else:
            jogada_pc()
            gamestate.nMovs += 1
            HexxagonAction.jog = troca_jog(HexxagonAction.jog)

        fim = fim_jogo()
        if fim == -1:
            results.diff.append(conta_pecas(1) - conta_pecas(2))
            finaliza()
            running = False

# - After the player has chosen the board this function loads it into the gamestate class

# - This function takes an input for the type of game the player wants to play

# - These next 2 functions save the gamestate and restores it when called, respectively

# - This function changes the player turn

# Comment

# Comment

# - Checks if the movement choice is either a jump or a multiplication

# - Checks if the move is inside the board limits


# - Using the last 2 functions, this one checks if the move is totally valid
#     - Note: the first 'if' removes the L like movement

# - This function checks the amount of valid moves a player has and returns its value. This will come in handy as if one player has zero moves, it skips his turn.

# - Function that returns the amount of empty squares


