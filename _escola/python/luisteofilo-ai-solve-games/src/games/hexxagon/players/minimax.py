from src.games.hexxagon.action import movimento_valido, executa_movimento, movimento
from src.games.hexxagon.players.greedy import algo_greedy
from src.games.hexxagon.result import fim_jogo
from src.games.hexxagon.state import gamestate
import copy

# Minmax Algorithm: Paired with the greedy heuristic,
# it plays every possible sequence of moves in a depth-first tree search, 
# up to a certain depth, and then evaluates the ending states, then after every state is done 
# (or, if a state doesn't meet the alpha-beta pruning requirements, in which is skipped), 
# it plays the one with the most favorable outcome for the computer

def algo_minimax(depth, minimizer, alfa, beta, minmaxmov=None):
    if depth == 3 or fim_jogo() == -1:
        return algo_greedy() * (-1)

    if minimizer:
        movimento.jog = minmaxmov.min
        value = +1000
        for yi in range(gamestate.N):
            for xi in range(gamestate.N):
                if gamestate.tabuleiro[yi][xi] == movimento.jog:
                    for k in range(0, gamestate.N):
                        for l in range(0, gamestate.N):
                            movimento.yi = yi
                            movimento.xi = xi
                            movimento.yf = l
                            movimento.xf = k
                            if movimento_valido(movimento):
                                temp = copy.deepcopy(gamestate.tabuleiro)
                                executa_movimento()
                                evaluation = algo_minimax(
                                    depth + 3, False, alfa, beta)
                                gamestate.tabuleiro = temp
                                value = min(value, evaluation)
                                beta = min(beta, evaluation)
                                if beta <= alfa:
                                    break
        movimento.jog = minmaxmov.max
        return value
    else:
        movimento.jog = minmaxmov.max
        value = -1000
        for yi in range(gamestate.N):
            for xi in range(gamestate.N):
                if gamestate.tabuleiro[yi][xi] == movimento.jog:
                    for k in range(0, gamestate.N):
                        for l in range(0, gamestate.N):
                            movimento.yi = yi
                            movimento.xi = xi
                            movimento.yf = l
                            movimento.xf = k
                            if movimento_valido(movimento):
                                temp = copy.deepcopy(gamestate.tabuleiro)
                                executa_movimento()
                                evaluation = algo_minimax(
                                    depth + 3, True, alfa, beta)
                                gamestate.tabuleiro = temp
                                value = max(value, evaluation)
                                alfa = max(alfa, evaluation)
                                if beta <= alfa:
                                    break
        movimento.jog = minmaxmov.min
        return value
