from state import gamestate
from action import HexxagonAction
import minimaxmov
import random
from algo_players.minimax import algo_minimax
from algo_players.random import algo_random
from algo_players.greedy import algo_greedy


def avalia(tipo):
    tipo = int(tipo)
    score = 0
    if tipo == 1:
        score = algo_random()
    elif tipo == 2:
        score = algo_greedy()
    elif tipo == 3:
        if gamestate.nMovs % 2 != 1:
            HexxagonAction.jog = 1
            minimaxmov.min = 1
            minimaxmov.max = 2
        else:
            HexxagonAction.jog = 2
            minimaxmov.min = 2
            minimaxmov.max = 1
        minimaxmov.yi = HexxagonAction.yi
        minimaxmov.xi = HexxagonAction.xi
        minimaxmov.yf = HexxagonAction.yf
        minimaxmov.xf = HexxagonAction.xf
        alfa = -100000
        beta = 100000
        score = algo_minimax(0, True, alfa, beta)
        HexxagonAction.yi = minimaxmov.yi
        HexxagonAction.xi = minimaxmov.xi
        HexxagonAction.yf = minimaxmov.yf
        HexxagonAction.xf = minimaxmov.xf
    elif tipo > 3:
        score = random.random()
    return score