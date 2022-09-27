from state import gamestate

def conta_pecas(jog):
    pecas = 0
    for i in range(gamestate.N):
        for j in range(gamestate.N):
            if gamestate.tabuleiro[i][j] == jog:
                pecas += 1
    return pecas