#include <iostream>
#include <vector>
using namespace std;

class Edge
{
    int src;
    int dest;
    int weight;
public:
    Edge(int s, int d, int w)
    {
        src = s;
        dest = d;
        weight = w;
    }
};

class Graph {

public:
    int V;
    vector< vector<int> > adjMatrix;

    Graph(int vertices)
    {
        V = vertices;
        adjMatrix = vector < vector<int> >(vertices, vector<int>(vertices, 0));
    }

    void addEdge(int src, int dest, int weight)
    {
        adjMatrix[src][dest] = weight;
        adjMatrix[dest][src] = weight;
    }
    int minKey(vector <int> key, vector <bool> inMST)
    {
        int minimum = INT_MAX;
        int min_index = -1;
        int v;
        for (v = 0; v < V; ++v)
        {
            if (!inMST[v] && key[v] < minimum)
            {
                minimum = key[v];
                min_index = v;
            }
        }
        return min_index;
    }

    void PrimMST()
    {
        vector<int> key(V, INT_MAX);
        vector<int> parent(V, -1);
        vector<bool> inMST(V, false);

        key[0] = 0;
        int i = 0, u, v;
        for(i = 0; i < V - 1; i++)
        {
            u = minKey(key, inMST);
            inMST[u] = true;

            for (v = 0; v < V; ++v)
            {
                if (adjMatrix[u][v] && !inMST[v] && adjMatrix[u][v] < key[v])
                {
                parent[v] = u;
                key[v] = adjMatrix[u][v];
                }
            }
        }
        printMST(parent);
    }

    void printMST(vector<int> parent)
    {
        int i;
        for(i = 0; i < V; i++)
        {
            cout<< parent[i] << " -> " << i << " " << adjMatrix[parent[i]][i] << endl;
        }
    }
};

int main()
{
    Graph G(5);
    G.addEdge(0, 1, 3);
    G.addEdge(1, 2, 1);
    G.addEdge(2, 3, 2);
    G.addEdge(3, 4, 3);
    G.addEdge(4, 0, 8);
    G.addEdge(3, 0, 7);
    G.addEdge(1, 3, 4);
    G.PrimMST();

    return 0;
}
