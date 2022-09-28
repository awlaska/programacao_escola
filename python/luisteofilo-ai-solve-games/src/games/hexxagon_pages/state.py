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
