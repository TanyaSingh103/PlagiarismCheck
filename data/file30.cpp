#include <bits/stdc++.h>
using namespace std;

int maxLoot(vector<int> colors, vector<int> vertices, int V)
{
    int loot;
    int maxColor = 0;
    for(int i = 0; i < V; i++)
    {
        if(colors[i] > maxColor)
        {
            maxColor = colors[i];
        }
    }
    for(int i = 0; i <= maxColor; i++)
    {
        int loot = 0;
        for(int j = 0; j < V; j++)
        {
            if(colors[j] == i)
            {
                loot += vertices[j];
            }
        }
        if(loot > loot)
        {
            loot = loot;
        }
    }
    return loot;
}

vector<int> color(vector<vector<int>>& graph, int V)
{
    vector<int> colors(V, -1);
    colors[0] = 0;
    vector<bool> visited(V, false);

    for (int u = 1; u < V; u++) {
        for (int i : graph[u])
            if (colors[i] != -1)
                visited[colors[i]] = true;

        int c;
        for (c = 0; c < V; c++)
            if (!visited[c])
                break;

        colors[u] = c;

        for (int i : graph[u])
            if (colors[i] != -1)
                visited[colors[i]] = false;
	}


    return colors;
}

int main()
{
    vector<int> vertices;
    int V, val;
    cout << "Enter number of vertices: ";
    cin>>V;
    vector<vector<int>> adj(V, vector<int>(V, 0));
    vector<vector<int>> graph(V);
    cout << "Enter adjacency matrix: ";
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            cin >> adj[i][j];
        }
    }
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            if(adj[i][j])
                graph[i].push_back(j);
        }
    }
    cout<< "Enter the vertices of vertices: ";
    for(int i = 0; i < V; i++)
    {
        cin >> val;
        vertices.push_back(val);
    }
    vector<int> colors = color(graph, V);
    int loot = maxLoot(colors, vertices, V);
    cout << "Max loot is: " << loot;
    return 0;
}
