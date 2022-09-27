from state import gamestate

def quad_validos():
    nmovs = 0
    for i in range(gamestate.N):
        for j in range(gamestate.N):
            if gamestate.tabuleiro[i][j] == 0:
                nmovs += 1
    return nmovs