import save
import copy
from state import gamestate

def copia():
    save.game = copy.deepcopy(gamestate.tabuleiro)