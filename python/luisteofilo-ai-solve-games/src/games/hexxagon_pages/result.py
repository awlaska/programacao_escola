# -  Checks if the game has reached its end conditions, depending on which one it is,
#    it sets the winner as one of the algo_players or as a draw.
# This function tracks the results of the game

def results(): #resultados
    vermelho = 0
    azul = 0
    empate = 0
    jogadas = []
    diff = []
    media = 0



# - When the computer asks to evaluate a play, if firstly asks which algorithm will be used for the evaluation (depending on the difficulty/algorithm chosen).

