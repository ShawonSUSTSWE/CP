#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sd(a)           scanf("%d",&a)
#define sdd(a,b)        scanf("d",&a,&b)
#define sddd(a,b,c)     scanf("d%d",&a,&b,&c)
#define sl(a)           scanf("%lld",&a)
#define sll(a,b)        scanf("lld",&a,&b)
#define slll(a,b,c)     scanf("lld%lld",&a,&b,&c)
#define su(a)           scanf("%llu",&a)
#define suu(a,b)        scanf("llu",&a,&b)
#define suuu(a,b,c)     scanf("llu%llu",&a,&b,&c)
#define sf(a)           scanf("%lf",&a)
#define sff(a,b)        scanf("lf",&a,&b)
#define sfff(a,b,c)     scanf("lfld%lf",&a,&b,&c)
#define pd(a)           printf("%d\n",a)
#define pf(a)           printf("%f\n",a)
#define pl(a)           printf("%lld\n",a)
#define pu(a)           printf("%llu\n",a)
#define fr(i,x,n,k)     for(int i=x;i<=n;i += k)
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX
#define IOS             ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl              '\n'
#define testcase	    int T; for ( cin >> T; T--; )

using namespace std;

vector <pair<ull,ull>> adj_list[1000005];
vector <ull> bfs_list[1000005];
int visited[1000005], edge[1000005] = {0}, result[1000005];
ull total_edge = 0;

void dfs ( ull u, ull sum, ull root, ull parent )

{
    //cout << u << " " << sum << nl;
    visited[u] = 1;
    if ( adj_list[u].size() == 1 && u != root )
    {
        //cout << sum << nl;
        if ( adj_list[u][0].second == bfs_list[parent][bfs_list[parent].size()-1] && bfs_list[parent].size() > 1 )
            result[u] = max(sum,adj_list[u][0].second+bfs_list[parent][bfs_list[parent].size()-2]);
        else if ( bfs_list[parent].size() == 1 )
        {
            result[u] = sum;
        }
        else if ( adj_list[u][0].second != bfs_list[parent][bfs_list[parent].size()-1] )
        {
            result[u] = max(sum,adj_list[u][0].second+bfs_list[parent][bfs_list[parent].size()-1]);
        }
        return;
    }
    for ( int i = 0; i < adj_list[u].size(); i++ )
    {
        ull x = adj_list[u][i].first;
        if ( u != root )
        {
            if ( bfs_list[u].size() > 1 )
                result[u] = bfs_list[u][bfs_list[u].size()-1]+max(sum,bfs_list[u][bfs_list[u].size()-2]);
            else
            {
                //cout << u << " " << bfs_list[u][0] << " " << sum << nl;
                result[u] = bfs_list[u][0] + sum;
            }

        }
        if ( !visited[x] )
        {
            if ( bfs_list[u].size() > 1 && u == root )
            {
                if ( bfs_list[u][bfs_list[u].size()-1] == adj_list[u][i].second + bfs_list[x][bfs_list[x].size()-1] )
                {
                    //cout << x << " First way\n";
                    //bfs_list.pb(bfs_list[u][bfs_list[u].size()-2]+adj_list[u][i].second);
                    dfs(x,bfs_list[u][bfs_list[u].size()-2]+adj_list[u][i].second,1,u);
                }
                else
                {
                    //cout << x << " Second way\n";
                    //bfs_list.pb(bfs_list[u][bfs_list[u].size()-2]+adj_list[u][i].second);
                    dfs(x,bfs_list[u][bfs_list[u].size()-1]+adj_list[u][i].second,1,u);
                }

            }
            else if ( u == root && bfs_list[u].size() == 1 )
            {
                sum = 0;
                //cout << x << nl;
                dfs(x,sum+adj_list[u][i].second,1,u);
            }
            else dfs(x,sum+adj_list[u][i].second,1,u);
        }
    }
}

void bfs ( ull n, ull root )

{
    ull dest = 0;
    for ( int i = 1; i <= n; i++ )
    {
        if ( total_edge == 0 )
        {
            //cout << "BREAK!!!!!!!";
            break;
        }
        if ( edge[i] == 1 && i != root )
        {
            if(bfs_list[i].empty())
            {
                dest = adj_list[i][0].first;
                //cout << i << " " << dest << " " << adj_list[i][0].second << nl;
                bfs_list[dest].pb(adj_list[i][0].second);
                bfs_list[i].pb(0);
            }
            else
            {
                ull max_el = *max_element(bfs_list[i].begin(),bfs_list[i].end());
                for ( int j = 0; j < adj_list[i].size(); j++ )
                {
                    if (!visited[adj_list[i][j].first])
                    {
                        dest = adj_list[i][j].first, bfs_list[dest].pb(adj_list[i][j].second+max_el);
                        //cout << i << " " << dest << nl;
                    }


                }
            }
            visited[i] = 1;
            edge[i]--;
            edge[dest]--;
            total_edge--;
            bfs(n,1);
        }
    }
}

int main()

{
    ull n, u, v, weight, q, x;
    cin >> n;
    for ( ull i = 1; i < n; i++ )
    {
        cin >> u >> v >> weight;
        adj_list[u].pb(mp(v,weight));
        adj_list[v].pb(mp(u,weight));
        edge[u]++, edge[v]++, total_edge++;
    }
    bfs(n,1);
    for ( int i = 1; i <= n; i++ )
    {
        //cout << bfs_list[i][0] << nl;
        if (bfs_list[i].size()>1)
        {
            sort(bfs_list[i].begin(),bfs_list[i].end());
            //cout << i << nl;
        }
    }
    //cout << "ASSAS" << nl;
    if(bfs_list[1].size()>1)
    {
        result[1] = bfs_list[1][bfs_list[1].size()-1] + bfs_list[1][bfs_list[1].size()-2];
        //cout << result[1] << nl;
    }
    else result[1] = bfs_list[1][0];
    memset(visited,0,sizeof(visited));
    dfs(1,result[1],1,1);
    cin >> q;
    for ( ull i = 1; i <= q; i++ )
    {
        cin >> x;
        cout << result[x] << nl;
    }
}
