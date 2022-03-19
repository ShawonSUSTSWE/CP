#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sd(a)           scanf("%d",&a)
#define sdd(a,b)        scanf("%d %d",&a,&b)
#define sddd(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define sl(a)           scanf("%lld",&a)
#define sll(a,b)        scanf("%lld%lld",&a,&b)
#define slll(a,b,c)     scanf("%lld%lld%lld",&a,&b,&c)
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

int d[500005], cnt[500005];
set<int> ans;

int main()

{
    int n, m, u, v;
    sdd(n,m);
    for ( int i = 1; i <= n; i++ )
    {
        sd(d[i]);
        if ( !d[i] ) ans.insert(i);
    }
    for ( int i = 1; i <= m; i++ )
    {
        sdd(u,v);
        if ( d[u] == 0 && d[v] != 1 )
        {
            cnt[u] = -1;
            //cout << u << " " << v << nl;
            ans.erase(u);
        }
        else if ( d[v] == 0 && d[u] != 1 )
        {
            cnt[v] = -1;
            //cout << u << " " << v << nl;
            ans.erase(v);
        }
    }
    cout << *ans.begin() << nl;
    /*else
    {
        for( int i = 0; i < zero.size(); i++ )
        {
            int cnt = 0;
            for ( int j = 0; j < lenzero[zero[i]].size(); j++ )
            {
                if ( d[lenzero[zero[i]][j]] == 1 ) cnt++;
            }
            if ( cnt == lenzero[zero[i]].size() )
            {
                ans = zero[i];
                break;
            }
        }
        cout << ans << nl;
    }*/
    return 0;
}
