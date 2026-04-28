#include<bits/stdc++.h>
using namespace std;

int V;
vector<vector<int>> matrix;

void dfs()
{
    stack<int> S;          // change 1
    vector<bool> vis(V, false);

    S.push(0);
    vis[0] = true; // conflict

    while(!S.empty())
    {
        int u = S.top();   // change 2
        S.pop();

        cout << u << " ";

        for(int v = 0; v < V; v++)
        {
            if(matrix[u][v] == 1 && !vis[v])
            {
                vis[v] = true;
                S.push(v);
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

    dfs();

    return 0;
}