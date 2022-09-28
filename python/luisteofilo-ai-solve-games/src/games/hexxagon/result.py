# -  Checks if the game has reached its end conditions, depending on which one it is,
#    it sets the winner as one of the algo_players or as a draw.
from numpy import random
# This function tracks the results of the game

def results(): #resultados
    vermelho = 0
    azul = 0
    empate = 0
    jogadas = []
    diff = []
    media = 0

def jogada_pc():
    bestav = -100
    for yi in range(gamestate.N):
        for xi in range(gamestate.N):
            if gamestate.tabuleiro[yi][xi] == HexxagonAction.jog:
                for k in range(0, gamestate.N):
                    for l in range(0, gamestate.N):
                        HexxagonAction.yi = yi
                        HexxagonAction.xi = xi
                        HexxagonAction.yf = l
                        HexxagonAction.xf = k
                        if movimento_valido(HexxagonAction):
                            copia()
                            executa_movimento()
                            if gamestate.nMovs % 2 != 1:
                                av = avalia(gamestate.ai2diff)
                            else:
                                av = avalia(gamestate.ai1diff)
                            restaura()
                            if av >= bestav:
                                bestav = av
                                bestmov.yi = HexxagonAction.yi
                                bestmov.xi = HexxagonAction.xi
                                bestmov.yf = HexxagonAction.yf
                                bestmov.xf = HexxagonAction.xf
    HexxagonAction.yi = bestmov.yi
    HexxagonAction.xi = bestmov.xi
    HexxagonAction.yf = bestmov.yf
    HexxagonAction.xf = bestmov.xf
    if movimento_valido(HexxagonAction):
        executa_movimento()

# - When the computer asks to evaluate a play, if firstly asks which algorithm will be used for the evaluation (depending on the difficulty/algorithm chosen).

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