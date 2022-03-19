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

ll mountain[200005], dp[200005];

int main()

{
    testcase
    {
        ll n, k, p = -1, l;
        cin >> n >> k;
        memset(dp,0,sizeof(dp));
        for ( ll i = 1; i <= n; i++ )
        {
            cin >> mountain[i];
            if(i>=3)
            {
                if(mountain[i-1]>mountain[i] && mountain[i-1]>mountain[i-2])
                    dp[i-1]++;
            }
            dp[i] += dp[i-1];
        }
        for ( int i = 1, j = k; j <= n; i++, j++ )
        {
            if(dp[j-1]-dp[i]>p) l = i, p = dp[j-1]-dp[i];
        }
        cout << p+1 << " " << l << nl;
    }
    return 0;
}