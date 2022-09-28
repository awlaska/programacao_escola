import time

from src.games.hexxagon.action import HexxagonAction
from src.games.hexxagon.result import jogada_pc
from src.games.hexxagon.result import results
from src.games.hexxagon.simulator import tabul
from src.games.hexxagon.simulator import carrega_tabul
from src.games.hexxagon.simulator import players
from src.games.hexxagon.simulator import jogadas_validas_total
from src.games.hexxagon.simulator import troca_jog
from src.games.hexxagon.state import gamestate
from src.games.hexxagon.state import fim_jogo
from src.games.hexxagon.state import conta_pecas
from src.games.hexxagon.state import finaliza

tabuleiro = tabul()
carrega_tabul(tabuleiro)
players()


def run_simulation(iterations: int):
    start_time = time.time()
    for i in range(0, iterations):
        HexxagonAction.jog = 1
        carrega_tabul(tabuleiro)
        running = True

        while running:

            if jogadas_validas_total(HexxagonAction.jog) == 0:
                gamestate.nMovs += 1
                HexxagonAction.jog = troca_jog(HexxagonAction.jog)

            if gamestate.nMovs % 2 != 1:
                jogada_pc()
                gamestate.nMovs += 1
                HexxagonAction.jog = troca_jog(HexxagonAction.jog)
            else:
                jogada_pc()
                gamestate.nMovs += 1
                HexxagonAction.jog = troca_jog(HexxagonAction.jog)

            fim = fim_jogo()
            if fim == -1:
                results.diff.append(conta_pecas(1) - conta_pecas(2))
                finaliza()
                running = False

    print("-----Resultados do jogo-----")
    print("\n")
    print("Vitórias do Player 1: ", results.vermelho)
    print("Vitórias do Player 2: ", results.azul)
    print("Empates: ", results.empate)
    print("Tempo de execução: %s" % (time.time() - start_time))
    print("Win Rate Player 1: " + str(results.vermelho * 100.0 / iterations) + "%")
    print("Win Rate Player 2: " + str(results.azul * 100.0 / iterations) + "%")


def main():
    print("ESTG IA Games Simulator")

    num_iterations = 10

    run_simulation(num_iterations)

if __name__ == "__main__":
    main()