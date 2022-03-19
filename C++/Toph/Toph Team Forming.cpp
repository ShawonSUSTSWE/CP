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

int main ()

{
    ll n, q, k, l, r, c;
    cin >> n >> q;
    vector <ll> a;
    for ( ll i = 0; i < n; i++ )
    {
        cin >> k;
        a.pb(k);
    }
    //cout << q << nl;
    for ( ll j = 1; j <= q; j++ )
    {
        cin >> c;
        if ( c == 1 )
        {
            cin >> k;
            for ( ll i = 0; i < a.size(); i++ ) a[i] -= k;
            sort(a.begin(),a.end());
            //for ( ll i = 0; i < a.size(); i++ ) cout << a[i] << nl;
        }
        else
        {
            cin >> l >> r >> k;
            if ( a[(lower_bound (a.begin(), a.end(), l)+k-1-a.begin())] <= r )
                cout << a[(lower_bound (a.begin(), a.end(), l)+k-1-a.begin())] << nl;
            else cout << "-1\n";
        }
    }
}
