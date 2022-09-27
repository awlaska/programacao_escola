from state import gamestate
from action import HexxagonAction
import movimento_valido
import copia
import executa_movimento
import avalia
import restaura
import bestmov


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