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