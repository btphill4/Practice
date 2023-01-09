# A class to represent a graph object
class Graph:
    def __init__(self, edges, N):
 
        # A list of lists to represent an adjacency list
        self.adjList = [[] for _ in range(N)]
 
        # add edges to the undirected graph
        for (src, dest) in edges:
            self.adjList[src].append(dest)
 
 
# Function to perform DFS traversal on the graph on a graph
def DFS(graph, v, discovered, arrival, departure, time):
 
    time = time + 1
 
    # set the arrival time of vertex `v`
    arrival[v] = time
 
    # mark vertex as discovered
    discovered[v] = True
 
    for i in graph.adjList[v]:
        if not discovered[i]:
            time = DFS(graph, i, discovered, arrival, departure, time)
 
    time = time + 1
 
    # set departure time of vertex `v`
    departure[v] = time
 
    return time
 
 
if __name__ == '__main__':
 
    # List of graph edges as per the above diagram
    edges = [(0, 1), (0, 2), (2, 3), (2, 4), (3, 1), (3, 5), (4, 5), (6, 7)]
 
    # total number of nodes in the graph
    N = 8
 
    # build a graph from the given edges
    graph = Graph(edges, N)
 
    # list to store the arrival time of vertex
    arrival = [None] * N
 
    # list to store the departure time of vertex
    departure = [None] * N
 
    # Mark all the vertices as not discovered
    discovered = [False] * N
    time = -1
 
    # Perform DFS traversal from all undiscovered nodes to
    # cover all unconnected components of a graph
    for i in range(N):
        if not discovered[i]:
            time = DFS(graph, i, discovered, arrival, departure, time)
 
    # print arrival and departure time of each vertex in DFS
    for i in range(N):
        print("Vertex", i, (arrival[i], departure[i]))