#include<bits/stdc++.h>
#define INF INT_MAX
#define ull unsigned long long int
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)


using namespace std;

typedef pair<int, int> iPair;

int main ()

{
    int T;
    sf(T);
    for ( int k = 1; k <= T; k++ )
    {
        int num_of_city, roads, destination;
        sff(num_of_city,roads);
        int u, v, weight, dist[num_of_city+10];
        vector<int>adj[num_of_city+10], path[num_of_city+1];
        for ( int i = 0; i < roads; i++)
        {
            sfff(u,v,weight);
            adj[u].push_back(v);
            adj[v].push_back(u);
            path[u].push_back(weight);
            path[v].push_back(weight);
        }
        sf(destination);
        for (int i = 0; i <= num_of_city+9; ++i)
            dist[i] = INF;
        dist[destination] = 0;
        queue <iPair> way;
        way.push(make_pair(0,destination));
        while(!way.empty())
        {
            int p = way.front().second;
            way.pop();
            for ( int i = 0; i < adj[p].size(); i++ )
            {
                if  ( max ( dist[p], path[p][i]) < dist[adj[p][i]] )
                {
                    dist[adj[p][i]] = max( dist[p], path[p][i] );
                    way.push(make_pair(dist[adj[p][i]],adj[p][i]));
                }
            }
        }
        printf("Case %d:\n", k);
        for ( int i = 0; i < num_of_city; i++ )
        {
            if ( dist[i] == INF )
                printf("Impossible\n");
            else
                printf("%d\n", dist[i]);
        }
    }
    return 0;
}
