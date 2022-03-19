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
queue <ull> bfs_path;
ull visited[1000005], edge[1000005] = {0}, parent[1000005], p_weight[1000005], max_weight[1000005] = {0};
multiset <ull, greater<ull> > sorted_weight[1000005];
ull total_edge = 0;

void dfs ( ull u, ull sum )

{
    //cout << u << " " << sum << nl;
    visited[u] = 1;
    ull cost = 0, first_max = 0, second_max = 0;
    if(sorted_weight[u].size() > 1 )
    {
        multiset<ull>:: iterator itr = sorted_weight[u].begin();
        first_max = *itr;
        itr++;
        second_max = *itr;
    }
    else if ( sorted_weight[u].size() == 1 )
    {
        multiset<ull>:: iterator itr = sorted_weight[u].begin();
        first_max = *itr;
    }
    for ( int i = 0; i < adj_list[u].size(); i++ )
    {
        ull x = adj_list[u][i].first;
        ull y = adj_list[u][i].second;
        if ( !visited[x] )
        {
            if ( max_weight[x] + y == first_max )
            {
                cost = max(sum,second_max) + y;
            }
            else
            {
                cost = max(sum,first_max) + y;
            }
            sorted_weight[x].insert(cost);
            dfs(x,cost);
        }
    }
    visited[u] = 0;
}


void finding_parent ( ull p, ull u )

{
    visited[u] = 1;
    for ( int i = 0; i < adj_list[u].size(); i++ )
    {
        ull x = adj_list[u][i].first;
        parent[u] = p;
        if (!visited[x])
        {
            finding_parent(u,x);
        }
        if ( u != p && x == p )
        {
            p_weight[u] = adj_list[u][i].second;
        }
    }
    visited[u] = 0;
}

void bfs ( ull n, ull root )

{
    for ( int i = 1; i <= n; i++ )
    {
        if ( i != root && edge[i] == 1 )
            bfs_path.push(i);
    }
    while(!bfs_path.empty())
    {
        ull x = bfs_path.front();
        bfs_path.pop();
        ull y = parent[x];
        edge[y]--;
        sorted_weight[y].insert(max_weight[x]+p_weight[x]);
        if ( edge[y] == 1 && y != root )
        {
            bfs_path.push(y);
            max_weight[y] = *(sorted_weight[y].begin());
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
    finding_parent(1,1);
    bfs(n,1);
    multiset <ull>::iterator it = sorted_weight[1].begin();
    max_weight[1] = *it;
    dfs(1,0);
    cin >> q;
    ull sum = 0, j;
    for ( ull i = 1; i <= q; i++ )
    {
        sum = 0, j = 2;
        cin >> x;
        if ( adj_list[x].size() == 1 )
        {
            multiset<ull>::iterator itr = sorted_weight[x].begin();
            sum = *itr;
        }
        else
        {
            for ( multiset<ull>::iterator itr = sorted_weight[x].begin(); itr != sorted_weight[x].end(), j > 0; itr++, j-- )
            {
                //cout << j << nl;
                sum += *itr;
            }
        }
        cout << sum << nl;
    }
}
