from state import gamestate
from action import HexxagonAction

def executa_movimento():
    gamestate.tabuleiro[HexxagonAction.yf][HexxagonAction.xf] = HexxagonAction.jog
    if HexxagonAction.tipo == 1:
        gamestate.tabuleiro[HexxagonAction.yi][HexxagonAction.xi] = 0
    Infetar()