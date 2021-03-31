#include <iostream>
#include <vector>
using namespace std;
 
// Data structure to store a graph edge
struct Edge {
    int src, dest;
};
 
// A class to represent a graph object
class Graph
{
public:
    // a vector of vectors to represent an adjacency list
    vector<vector<int>> adjList;
 
    // Graph Constructor
    Graph(vector<Edge> const &edges, int N)
    {
        // resize the vector to hold `N` elements of type `vector<int>`
        adjList.resize(N);
 
        // add edges to the directed graph
        for (auto &edge: edges) {
            adjList[edge.src].push_back(edge.dest);
        }
    }
};
 
// Function to perform DFS traversal on the graph on a graph
int DFS(Graph const &graph, int v, vector<bool> &discovered,
    vector<int> &arrival, vector<int> &departure, int &time)
{
    // set the arrival time of vertex `v`
    arrival[v] = ++time;
 
    // mark vertex as discovered
    discovered[v] = true;
 
    for (int i: graph.adjList[v])
    {
        if (!discovered[i]) {
            DFS(graph, i, discovered, arrival, departure, time);
        }
    }
 
    // set departure time of vertex `v`
    departure[v] = ++time;
}
 
int main()
{
    // vector of graph edges as per the above diagram
    vector<Edge> edges = {
        {0, 2}, {1, 0}, {1,3}, {1,2}, {2,3}, {3,2},
        {5,2}, {5,4}, {5,7}, {4,6}, {6,7}, {7,4}, {4,1}
    };
 
    // total number of nodes in the graph
    int N = 8;
 
    // build a graph from the given edges
    Graph graph(edges, N);
 
    // vector to store the arrival time of vertex
    vector<int> arrival(N);
 
    // vector to store the departure time of vertex
    vector<int> departure(N);
 
    // Mark all the vertices as not discovered
    vector<bool> discovered(N);
    int time = -1;
 
    // Perform DFS traversal from all undiscovered nodes to
    // cover all unconnected components of a graph
    for (int i = 0; i < N; i++)
    {
        if (!discovered[i]) {
            DFS(graph, i, discovered, arrival, departure, time);
        }
    }
 
    // print arrival and departure time of each
    // vertex in DFS
    for (int i = 0; i < N; i++)
    {
        cout << "Vertex " << i << " (" << arrival[i]
             << ", " << departure[i] << ")" << endl;
    }
 
    return 0;
}