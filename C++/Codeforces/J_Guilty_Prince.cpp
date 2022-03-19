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

char land[25][25];
bool visited[25][25];
int ans; 
int dirx[] = {0,0,1,-1}, diry[] = {1,-1,0,0};

void dfs(int x, int y)

{
    //cout << x << " " << y << endl;
    visited[x][y] = true;
    ans++;
    int nx, ny;
    for ( int i = 0; i < 4; i++ )
    {
        nx = x+dirx[i], ny = y+diry[i];
        //cout << nx << " " << ny << " " << land[nx][ny] << endl;
        if(land[nx][ny] == '.' && !visited[nx][ny]) dfs(nx,ny);
    }
}

int main()

{
    int n, m, k = 1;
    testcase
    {
        cin >> m >> n;
        int startx, starty;
        ans = 0;
        memset(visited,false,sizeof(visited));
        memset(land,0,sizeof(land));
        for ( int i = 1; i <= n; i++ )
        {
            for ( int j = 1; j <= m; j++ )
            {
                cin >> land[j][i];
                if(land[j][i] == '@') startx = j, starty = i;
            }
        }
        dfs(startx, starty);
        cout << "Case " << k++ << ": " << ans << endl;
    }
    return 0;
}