from state import gamestate
from action import HexxagonAction
import totalmov
import movimento_valido

def jogadas_validas_total(jog):
    nmovs = 0
    for y in range(gamestate.N):
        for x in range(gamestate.N):
            if gamestate.tabuleiro[y][x] == jog:
                for k in range(gamestate.N):
                    for l in range(gamestate.N):
                        HexxagonAction.jog = jog
                        totalmov.yi = y
                        totalmov.xi = x
                        totalmov.yf = k
                        totalmov.xf = l
                        if movimento_valido(totalmov):
                            nmovs += 1
    return nmovs