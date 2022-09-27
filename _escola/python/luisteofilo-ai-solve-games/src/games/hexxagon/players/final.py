from src.games.hexxagon.result import results
from src.games.hexxagon.state import gamestate

def finaliza():
    if gamestate.vencedor != 0:
        if gamestate.vencedor == -1:
            results.vermelho += 1
        else:
            results.azul += 1
    else:
        results.empate += 1
    results.jogadas.append(gamestate.nMovs)