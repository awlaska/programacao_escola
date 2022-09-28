class NodoLista:
    def __init__(self, dado):
        self.dado = dado
        self.proximo = None

    def inserir(self, nodo):
        nodo.proximo = self.proximo
        self.proximo = nodo


# Construindo a lista 'Filipe'->'Chagas'->'Ferraz'

lista = NodoLista('Filipe')
lista.inserir(NodoLista('Ferraz'))
lista.inserir(NodoLista('Chagas'))

#-------------------------------------------------------

grafo = {
	'A': ['B', 'D'],
	'B': ['C'],
	'C': ['B','D'],
	'D': []
}

#---------------------------------------------------------

#include <map>
#include <vector>

int main() {
	std::map<char, std::vector<char>> grafo;
	grafo['A'] = {'B', 'D'};
	grafo['B'] = {'C'};
	grafo['C'] = {'B', 'D'};
	grafo['D'] = {};

	return 0;
}

#---------------------------------------------------------

class NodoArvore:

    # Construtor da classe
    def __init__(self, nome, id):
        self.nome = nome
        self.id = id
        self.menor = None
        self.maior = None

    # Inserir novos elementos na arvore
    def inserir(self, nodo):
        if nodo.id < self.id:
            if self.menor == None:
                self.menor = nodo
            else:
                self.menor.inserir(nodo)
        elif nodo.id > self.id:
            if self.maior == None:
                self.maior = nodo
            else:
                self.maior.inserir(nodo)
        else:
            print('Erro: id repetido')

    # Imprimir informacoes sobre o elemento
    def imprimir(self):
        print('id e nome:')
        print(self.id)
        print(self.nome)

# Fim da classe NodoArvore

#---------------------------------------------------------

def percorrer_arvore(nodo):
	if nodo <> None:
		percorrer_arvore(nodo.menor)
		nodo.imprimir()
		percorrer_arvore(nodo.maior)

#---------------------------------------------------------

def buscar(nodo, nome):
	if nodo <> None:
		if nodo.nome == nome:
			return nodo
		else:
			recebido = buscar(nodo.menor, nome)
			if recebido <> None:
				return recebido
			else:
				recebido = buscar(nodo.maior, nome)
				if recebido <> None:
					return recebido
				else:
					return None
	else:
		return None

#---------------------------------------------------------

class Elemento:
    def __init__(self, cor):
	self.cor = cor
	self.adjacencias = []

#Elementos do grafo
A = Elemento('Cinza')
B = Elemento('Roza')
C = Elemento('Vermelho')
D = Elemento('Verde')
E = Elemento('Azul')
F = Elemento('Amarelo')
G = Elemento('Laranja')

#Listas de adjacencias
A.adjacencias = [B, D, E]
B.adjacencias = [C]
C.adjacencias = [G]
D.adjacencias = [C]
E.adjacencias = [D, F]
F.adjacencias = [G]
G.adjacencias = [D]

#---------------------------------------------------------

def buscar (e_inicial, cor):
	fila = [e_inicial]

	while len(fila) > 0:
		#Obter um objeto da fila
		e_obtido = fila.pop()

		if e_obtido.cor == cor:
			#Encontrado!!
			return e_obtido
		else:
			#Inserir adjacencias da fila
			for e_adjacente in e_obtido.adjacencias:
				fila.insert(0, e_adjacente)
	#Nao encontrado
	return None

#---------------------------------------------------------

def buscar (cor, e_inicial):
	fila = [e_inicial]
	verificados = []

	while len(fila) > 0:
		#Obter objeto da fila para verificacao
		e_obtido = fila.pop()
		verificados.append(e_obtido)

		#Verificar objeto
		if e_obtido.cor == cor:
			#Encontrado!!
			return e_obtido
		else:
			#Inserir adjacencias da fila
			for e_adjacente in e_obtido.adjacencias:
				if ((e_adjacente not in verificados)
					and (e_adjacente not in fila)):
						fila.insert(0, e_adjacente)
	#Nao encontrado
	return None;
}