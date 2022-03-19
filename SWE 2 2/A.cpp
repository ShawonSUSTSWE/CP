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
vector <ull> result[1000005];
int visited[1000005];

ull dfs ( ull parent, ull u )

{
    ull ans = 0, value = 0, maxvalue = 0, p_value = 0;
    visited[u] = 1;
    vector<ull> cost;
    if ( adj_list[u].size() == 1 && visited[adj_list[u][0].first])
    {
        //cout << adj_list[u][0].second << nl;
        visited[u] = 0;
        return adj_list[u][0].second;
    }

    for ( int i = 0; i < adj_list[u].size(); i++ )
    {
        ull v = adj_list[u][i].first;
        if ( v == parent )
            p_value = adj_list[u][i].second;
        //cout << u << " " << parent << " " << p_value << nl;
        if(!visited[v])
        {
            value = dfs(u,v);
        }
        maxvalue = max(maxvalue,value);
        cost.pb(value);
    }
    if ( u == parent )
    {
        visited[u] = 0;
        if ( cost.size() == 1 ) return cost[0];
        sort(cost.begin(),cost.end());
        return cost[cost.size()-1]+cost[cost.size()-2];
    }
    else
    {
        visited[u] = 0;
        //cout << u << " " << maxvalue << " " << p_value << nl;
//        cout << maxvalue+p_value << nl;
        return maxvalue+p_value;
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
    }
    cin >> q;
    for ( ull i = 1; i <= q; i++ )
    {
        cin >> x;
        cout << dfs(x,x) << nl;
    }
}
