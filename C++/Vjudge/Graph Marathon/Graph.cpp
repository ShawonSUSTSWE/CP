#include<bits/stdc++.h>
#define INF INT_MAX

using namespace std;

int main()

{
    int T;
    cin >> T;
    for ( int k = 0; k < T; k++ )
    {
        int junction, road;
        cin >> junction >> road;
        int u, v, weight;
        vector <int> adj[junction+10], weights[junction+1];
        int path[junction+10];
        for ( int i = 0; i < road; i++ )
        {
            cin >> u >> v >> weight;
            adj[u].push_back(v);
            adj[v].push_back(u);
            weights[u].push_back(weight);
            weights[v].push_back(weight);
        }
      for (int i = 1; i <= junction+9; ++i)
            path[i] = INF;
        path[1]=0;
        queue<pair<int, int>>q;
        q.push(make_pair(0, 1));
        while(!q.empty())
        {
            pair<int, int>p = q.front();
            int x = p.second;
            q.pop();
            for (int i = 0; i < adj[x].size(); ++i)
            {
                if(path[adj[x][i]] > path[x] + weights[x][i])
                {
                    path[adj[x][i]] = path[x] + weights[x][i];
                    q.push(make_pair(path[adj[x][i]], adj[x][i]));
                }
            }
        }
        if (path[junction]== INF)
        {
            printf("Case %d: Impossible\n", k+1);
        }
        else
        {
            printf("Case %d: %d\n", k+1, path[junction]);
        }

    }
return 0;
}
