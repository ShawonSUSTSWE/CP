/*

 _____                           ______
|      |    |   /\  \          /|      ||\   |
|_____ |____|  /  \  \        / |      || \  |
     | |    | /----\  \  /\  /  |      ||  \ |
_____| |    |/      \  \/  \/   |______||   \|

*/


#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sd(a)           scanf("%d",&a)
#define sdd(a,b)        scanf("%d%d",&a,&b)
#define sddd(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define sl(a)           scanf("%lld",&a)
#define sll(a,b)        scanf("%lld%lld",&a,&b)
#define slll(a,b,c)     scanf("%lld%lld%lld",&a,&b,&c)
#define su(a)           scanf("%llu",&a)
#define suu(a,b)        scanf("%llu%llu",&a,&b)
#define suuu(a,b,c)     scanf("%llu%llu%llu",&a,&b,&c)
#define sf(a)           scanf("%lf",&a)
#define sff(a,b)        scanf("%lf%lf",&a,&b)
#define sfff(a,b,c)     scanf("%lf%lfld%lf",&a,&b,&c)
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

vector<int> road[105];
int dist[105], alt_dist[105], ans = 0;
queue<int> visit;

void bfs(int start)

{
    visit.push(start);
    while(!visit.empty())
    {
        int current = visit.front();
        visit.pop();
        for ( int i = 0; i < road[current].size(); i++ )
        {
            if(dist[road[current][i]] == -1) 
            {
                dist[road[current][i]] = dist[current]+1;
                visit.push(road[current][i]);
            }
               
        }
    }
}

void alt_bfs(int start)

{
    visit.push(start);
    while(!visit.empty())
    {
        int current = visit.front();
        //cout << current << nl;
        visit.pop();
        for ( int i = 0; i < road[current].size(); i++ )
        {
            if ( alt_dist[road[current][i]] == -1 )
            {
                alt_dist[road[current][i]] = alt_dist[current]+1;
                //cout << "way" << road[current][i] << " " << alt_dist[road[current][i]] << endl;
                visit.push(road[current][i]);
            }   
        }
    }
}

int main()

{
    int k = 1;
    testcase
    {
        int n, r, u, v, start, dest;
        cin >> n >> r;
        for ( int i = 1; i <= r; i++ )
        {
            cin >> u >> v;
            road[u].pb(v);
            road[v].pb(u);
        }
        ans = 0;
        memset(dist,-1,sizeof(dist));
        memset(alt_dist,-1,sizeof(alt_dist));
        cin >> start >> dest;
        dist[start] = 0;
        bfs(start);
        if(!visit.empty()) cout << 1 << endl;
        alt_dist[dest] = 0;
        //cout << dest << endl;
        alt_bfs(dest);
        for ( int i = 0; i < n; i++ )
        {
            //cout << dist[i] << " " << alt_dist[i] << nl;
            ans = max(ans, dist[i]+alt_dist[i]);
        }
        cout << "Case " << k++ << ": " << ans << endl;
        for(int i = 0; i < n; i++ )
            road[i].clear();
    }
    return 0;
}