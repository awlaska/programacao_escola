from state import gamestate
import quad_validos
import conta_pecas

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
