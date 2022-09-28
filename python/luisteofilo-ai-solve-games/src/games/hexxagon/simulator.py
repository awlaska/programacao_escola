import copy
from src.games.hexxagon.action import save, totalmov, HexxagonAction
from src.games.hexxagon.state import gamestate
from src.games.hexxagon.state import fim_jogo, conta_pecas
from src.games.hexxagon.result import jogada_pc, finaliza, results
from src.main import tabuleiro


def tabul():
    board = "hex.txt"
    return board

# - After the player has chosen the board this function loads it into the gamestate class

def carrega_tabul(ficheiro):
    f = open(ficheiro)
    gamestate.N = int(f.readline())
    tabuleiro = []
    for i in range(gamestate.N):
        tabuleiro.append(list(map(int, f.readline().split())))
    f.close()
    gamestate.tabuleiro = tabuleiro

# - This function takes an input for the type of game the player wants to play


def copia():
    save.game = copy.deepcopy(gamestate.tabuleiro)

def restaura():
    gamestate.tabuleiro = save.game


def simulator():
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

# - These next 2 functions save the gamestate and restores it when called, respectively


# - This function changes the player turn

def troca_jog(jog):
    if jog == 1:
        return 2
    else:
        return 1

# Comment

def Infetar():
    dx = -1
    dy = -1
    for dx in range(dx, 2):
        for dy in range(dy, 2):
            try:
                if HexxagonAction.yf + dy == -1 and HexxagonAction.xf + dx == -1:
                    if gamestate.tabuleiro[0][0] == troca_jog(HexxagonAction.jog):
                        gamestate.tabuleiro[HexxagonAction.yf + dy +
                                            1][HexxagonAction.xf + dx+1] = HexxagonAction.jog
                elif HexxagonAction.yf + dy == -1:
                    if gamestate.tabuleiro[0][HexxagonAction.xf + dx] == troca_jog(HexxagonAction.jog):
                        gamestate.tabuleiro[HexxagonAction.yf + dy +
                                            1][HexxagonAction.xf + dx] = HexxagonAction.jog
                elif HexxagonAction.xf + dx == -1:
                    if gamestate.tabuleiro[HexxagonAction.yf + dy][0] == troca_jog(HexxagonAction.jog):
                        gamestate.tabuleiro[HexxagonAction.yf + dy][HexxagonAction.xf +
                                                               dx+1] = HexxagonAction.jog
                elif gamestate.tabuleiro[HexxagonAction.yf + dy][HexxagonAction.xf + dx] == troca_jog(HexxagonAction.jog):
                    gamestate.tabuleiro[HexxagonAction.yf +
                                        dy][HexxagonAction.xf + dx] = HexxagonAction.jog
            except IndexError:
                pass
        dy = -1

# Comment

def executa_movimento():
    gamestate.tabuleiro[HexxagonAction.yf][HexxagonAction.xf] = HexxagonAction.jog
    if HexxagonAction.tipo == 1:
        gamestate.tabuleiro[HexxagonAction.yi][HexxagonAction.xi] = 0
    Infetar()

# - Checks if the movement choice is either a jump or a multiplication

def adjacente(dist, classe):
    return(
        abs(classe.xi - classe.xf) == dist and abs(classe.yi - classe.yf) <= dist or
        abs(classe.yi - classe.yf) == dist and abs(classe.xi - classe.xf) <= dist)

# - Checks if the move is inside the board limits

def dentro(x, y):
    return 0 <= x <= gamestate.N - 1 and 0 <= y <= gamestate.N - 1

# - Using the last 2 functions, this one checks if the move is totally valid
#     - Note: the first 'if' removes the L like movement

def movimento_valido(classe):
    if abs(classe.yf - classe.yi) == 2 \
            and abs(classe.xf - classe.xi) == 1 \
            or abs(classe.xf - classe.xi) == 2 \
            and abs(classe.yf - classe.yi) == 1:
        return False
    if not dentro(classe.xi, classe.yi) or not dentro(classe.xf, classe.yf):
        return False
    if gamestate.tabuleiro[classe.yi][classe.xi] == HexxagonAction.jog \
            and gamestate.tabuleiro[classe.yf][classe.xf] == 0 \
            and adjacente(1, classe):
        classe.tipo = 0
        return True
    if gamestate.tabuleiro[classe.yi][classe.xi] == HexxagonAction.jog \
            and gamestate.tabuleiro[classe.yf][classe.xf] == 0 \
            and adjacente(2, classe):
        classe.tipo = 1
        return True

# - This function checks the amount of valid moves a player has and returns its value. This will come in handy as if one player has zero moves, it skips his turn.

def jogadas_validas_total(jog):
    nmovs = 0
    for y in range(gamestate.N):
        for x in range(gamestate.N):
            if gamestate.tabuleiro[y][x] == jog:
                for k in range(gamestate.N):
                    for l in range(gamestate.N):
                        HexxagonAction.jog = jog
                        totalmov.yi = y
                        totalmov.xi = x
                        totalmov.yf = k
                        totalmov.xf = l
                        if movimento_valido(totalmov):
                            nmovs += 1
    return nmovs

# - Function that returns the amount of empty squares


