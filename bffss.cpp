#include<bits/stdc++.h>
using namespace std;

int V;
vector<vector<int>> matrix;

void bfs()
{
    queue<int> Q;
    vector<bool> vis(V, false);

    Q.push(0);
    vis[0] = true;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        cout << u << " ";

        // instead of adjacency list
        for(int v = 0; v < V; v++)
        {
            if(matrix[u][v] == 1 && !vis[v])
            {
                vis[v] = true;
                Q.push(v);
            }
        }
    }
    cout << endl;
}

int main()
{
    cin >> V;

    matrix.resize(V, vector<int>(V));

    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            cin >> matrix[i][j];
        }
    }

    bfs();

    return 0;
}