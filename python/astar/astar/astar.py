import heapq
import time

graph = {
    'A': {'B': [5, 5], 'F': [3, 9]},
    'B': {'C': [2, 14], 'G': [3, 2]},
    'C': {'D': [6, 8]},
    'D': {'E': [3, 5]},
    'E': {'H': [5, 0], 'F': [8, 9]},
    'F': {'G': [7, 2]},
    'G': {'H': [2, 0]},
    'H': {}
}

# Função para retornar tempo de execução (repete algoritmo 1M de vezes)
start_time = time.time()
for i in range(1000001):
    def astar(graph, start_node, end_node):
        # astar: F=G+H, F -> f_distance, G -> g_distance,
        # H heuristic
        # inicializar em 0 ambas as distancias
        f_distance = {node: float('inf') for node in graph}
        f_distance[start_node] = 0

        g_distance = {node: float('inf') for node in graph}
        g_distance[start_node] = 0

        came_from = {node: None for node in graph}
        came_from[start_node] = start_node

        queue = [(0, start_node)]
        while queue:
            current_f_distance, current_node = heapq.heappop(queue)

            if current_node == end_node:
                print('found the end_node')
                return f_distance, came_from
            for next_node, weights in graph[current_node].items():
                temp_g_distance = g_distance[current_node] + weights[0]
                if temp_g_distance < g_distance[next_node]:
                    g_distance[next_node] = temp_g_distance
                    heuristic = weights[1]
                    # comprimento inicial de G mais a heuristica
                    f_distance[next_node] = temp_g_distance + heuristic
                    came_from[next_node] = current_node

                    heapq.heappush(queue, (f_distance[next_node], next_node))
            return f_distance, came_from

print(astar(graph, 'A', 'H'))
print("%s seconds" % (time.time() - start_time))
print("Numero de execuções: %s" % (i))