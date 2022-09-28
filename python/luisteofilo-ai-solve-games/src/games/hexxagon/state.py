from src.games.hexxagon.result import results

# - Now we need a class to save the game state. This class will contain info like:
#     - the chosen board and its size (N)
#     - the square size (dynamic by the screen size over the amount of squares of the board)
#     - the number of moves played
#     - the type of the game (if it is Human x Human, Human x PC or PC x PC)
#       and, if any of the types involving the PC is chosen, the AI algorithm it'll have
#     - the recursive depth (if the minmax algorithm is chosen)
#     - The winner

class gamestate:
    N = 0
    tabuleiro = []
    tipo = 3
    ai1diff = 0
    ai2diff = 0
    nMovs = 1
    vencedor = 0

def conta_pecas(jog):
    pecas = 0
    for i in range(gamestate.N):
        for j in range(gamestate.N):
            if gamestate.tabuleiro[i][j] == jog:
                pecas += 1
    return pecas


def quad_validos():
    nmovs = 0
    for i in range(gamestate.N):
        for j in range(gamestate.N):
            if gamestate.tabuleiro[i][j] == 0:
                nmovs += 1
    return nmovs


def fim_jogo():
    n = quad_validos()
    if conta_pecas(1) == 0 or conta_pecas(2) == 0:
        if conta_pecas(1) == 0:
            gamestate.vencedor = 1
            return -1
        else:
            gamestate.vencedor = -1
            return -1
    if n == 0:
        if conta_pecas(1) - conta_pecas(2) >= 0:
            gamestate.vencedor = -1
            return -1
        if conta_pecas(1) - conta_pecas(2) < 0:
            gamestate.vencedor = 1
            return -1
        else:
            gamestate.vencedor = 0
            return -1
    else:
        return 0
