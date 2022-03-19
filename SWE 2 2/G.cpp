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

vector <int> adj_list[100005];
int cost[100005], result[100005], ans = 0, number[2048];


int dfs ( int u, int v )

{
    int a = 0;
    if(adj_list[v].size()>1)
    {
        for ( int i = 0; i < adj_list[v].size(); i++ )
        {
            if(adj_list[v][i] != u)
                a = a | dfs(v,adj_list[v][i]);
        }
    }
    return a | cost[v];
}





int main()

{
    int n, u, v;
    cin >> n;
    for ( int i = 1; i < n; i++ )
    {
        cin >> u >> v;
        adj_list[u].pb(v);
        adj_list[v].pb(u);
    }
    for ( int i = 1; i <= n; i++ )
    {
        cin >> cost[i];
    }
    vector <int> unique_num;
    for ( int i = 0; i < adj_list[1].size(); i++ )
    {
        result[adj_list[1][i]] = cost[1] | dfs(1,adj_list[1][i]);
        if(!number[result[adj_list[1][i]]])
            unique_num.pb(result[adj_list[1][i]]);
        number[result[adj_list[1][i]]]++;
        ans = max(ans,result[adj_list[1][i]]);
        //cout << ans << nl;
    }
    for ( int i = 0; i < unique_num.size(); i++ )
    {
        for ( int j = i+1; j < unique_num.size(); j++ )
        {
            ans = max(ans, unique_num[i] | unique_num[j]);
        }
    }
    ans = cost[1] | ans;
    cout << ans << nl;
    return 0;
}
