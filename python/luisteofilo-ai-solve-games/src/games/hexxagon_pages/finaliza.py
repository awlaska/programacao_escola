from state import gamestate
from result import results

def finaliza():
    if gamestate.vencedor != 0:
        if gamestate.vencedor == -1:
            results.vermelho += 1
        else:
            results.azul += 1
    else:
        results.empate += 1
    results.jogadas.append(gamestate.nMovs)