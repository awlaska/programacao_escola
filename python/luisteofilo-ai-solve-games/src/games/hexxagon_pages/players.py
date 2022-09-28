def players():
    print("Player 1:")
    print("1 - Random")
    print("2 - Greedy")
    print("3 - Minimax")
    gamestate.ai1diff = int(input())
    print("Player 2:")
    print("1 - Random")
    print("2 - Greedy")
    print("3 - Minimax")
    gamestate.ai2diff = int(input())
    return