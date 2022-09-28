from state import gamestate

def dentro(x, y):
    return 0 <= x <= gamestate.N - 1 and 0 <= y <= gamestate.N - 1