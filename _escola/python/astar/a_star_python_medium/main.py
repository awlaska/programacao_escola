import heapq

graph={
    # now we need a list as the value to store g-score and h-score
    # list first value is the g-score, second value is the h-score,i.e., heuristic
    'A':{'B':[2,2],'C':[3,2]},
    'B':{'D':[3,5],'E':[1,1]},
    'C':{'F':[2,0]},
    'D':{},
    'E':{'F':[1,0]},
    'F':{}
}


def astar(graph, start_node, end_node):
    # astar: F=G+H, we name F as f_distance, G as g_distance,
    # H as heuristic
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
                f_distance[next_node] = temp_g_distance + heuristic
                came_from[next_node] = current_node

                heapq.heappush(queue, (f_distance[next_node], next_node))


    return f_distance, came_from


print(astar(graph, 'A', 'F'))
# return {'A': 0, 'B': 4, 'C': 5, 'D': 10, 'E': 4, 'F': 4} and
# {'A': 'A', 'B': 'A', 'C': 'A', 'D': 'B', 'E': 'B', 'F': 'E'}