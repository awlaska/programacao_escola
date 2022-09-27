from numpy import random

from src.games.hexxagon.action import HexxagonAction
from src.games.hexxagon.state import conta_pecas
from src.games.hexxagon.simulator import troca_jog


def algo_greedy():
    salt = random.random()
    return conta_pecas(HexxagonAction.jog) - conta_pecas(troca_jog(HexxagonAction.jog)) + salt
