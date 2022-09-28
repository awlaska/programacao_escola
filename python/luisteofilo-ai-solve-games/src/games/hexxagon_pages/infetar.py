from state import gamestate
from action import HexxagonAction
import troca_jog


def Infetar():
    dx = -1
    dy = -1
    for dx in range(dx, 2):
        for dy in range(dy, 2):
            try:
                if HexxagonAction.yf + dy == -1 and HexxagonAction.xf + dx == -1:
                    if gamestate.tabuleiro[0][0] == troca_jog(HexxagonAction.jog):
                        gamestate.tabuleiro[HexxagonAction.yf + dy +
                                            1][HexxagonAction.xf + dx+1] = HexxagonAction.jog
                elif HexxagonAction.yf + dy == -1:
                    if gamestate.tabuleiro[0][HexxagonAction.xf + dx] == troca_jog(HexxagonAction.jog):
                        gamestate.tabuleiro[HexxagonAction.yf + dy +
                                            1][HexxagonAction.xf + dx] = HexxagonAction.jog
                elif HexxagonAction.xf + dx == -1:
                    if gamestate.tabuleiro[HexxagonAction.yf + dy][0] == troca_jog(HexxagonAction.jog):
                        gamestate.tabuleiro[HexxagonAction.yf + dy][HexxagonAction.xf +
                                                               dx+1] = HexxagonAction.jog
                elif gamestate.tabuleiro[HexxagonAction.yf + dy][HexxagonAction.xf + dx] == troca_jog(HexxagonAction.jog):
                    gamestate.tabuleiro[HexxagonAction.yf +
                                        dy][HexxagonAction.xf + dx] = HexxagonAction.jog
            except IndexError:
                pass
        dy = -1