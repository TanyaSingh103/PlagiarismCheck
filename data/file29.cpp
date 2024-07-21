#include <bits/stdc++.h>
using namespace std;

vector<int> colorGraph(vector<vector<int>>& graph, int V)
{
    vector<int> result(V, -1);
    result[0] = 0;
    vector<bool> available(V, false);

    for (int u = 1; u < V; u++) {
        for (int i : graph[u])
            if (result[i] != -1)
                available[result[i]] = true;

        int cr;
        for (cr = 0; cr < V; cr++)
            if (!available[cr])
                break;

        result[u] = cr;

        for (int i : graph[u])
            if (result[i] != -1)
                available[result[i]] = false;
	}


    return result;
}

int getMaxLoot(vector<int> colors, vector<int> values, int V)
{
    int max_loot;
    int max_color = 0;
    for(int i = 0; i < V; i++)
    {
        if(colors[i] > max_color)
        {
            max_color = colors[i];
        }
    }
    for(int i = 0; i <= max_color; i++)
    {
        int loot = 0;
        for(int j = 0; j < V; j++)
        {
            if(colors[j] == i)
            {
                loot += values[j];
            }
        }
        if(loot > max_loot)
        {
            max_loot = loot;
        }
    }
    return max_loot;
}

int main()
{
    vector<int> values;
    int V, val;
    cout << "Enter number of vertices: ";
    cin>>V;
    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));
    vector<vector<int>> graph(V);
    cout << "Enter adj matrix: ";
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            cin >> adjMatrix[i][j];
        }
    }
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            if(adjMatrix[i][j])
                graph[i].push_back(j);
        }
    }
    cout<< "Enter the values of vertices: ";
    for(int i = 0; i < V; i++)
    {
        cin >> val;
        values.push_back(val);
    }
    vector<int> colors = colorGraph(graph, V);
    int max_loot = getMaxLoot(colors, values, V);
    cout << "Max loot is: " << max_loot;
    return 0;
}
