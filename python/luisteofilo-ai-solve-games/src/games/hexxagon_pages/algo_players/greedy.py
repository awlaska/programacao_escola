from numpy import random
from src.games.hexxagon_pages.conta_pecas import conta_pecas
from src.games.hexxagon_pages.action import HexxagonAction
from src.games.hexxagon_pages.troca_jog import troca_jog

def algo_greedy():
    salt = random.random()
    return conta_pecas(HexxagonAction.jog) - conta_pecas(troca_jog(HexxagonAction.jog)) + salt
