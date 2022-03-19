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

int main()

{
    ll n, l, r, a;
    testcase
    {
        cin >> n >> l >> r;
        vector<ll> num;
        ll cl = 0, cr = 0, cnt = 0;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> a;
            num.pb(a);
        }
        sort(num.begin(), num.end());
        for ( int i = 0; i < n-1; i++ )
        {
            cl = l-num[i];
            cr = r-num[i];
            cnt += ((upper_bound(num.begin()+i+1, num.end(), cr)-num.begin()-i-1)-(lower_bound(num.begin()+i+1, num.end(), cl)-num.begin()-i-1));
            //cout << cl << " " << cr << " " << num[i] << " " << cnt << endl;
            //cout << (upper_bound(num.begin()+i+1, num.end(), cr)-num.begin()) << " " << (lower_bound(num.begin(), num.end(), cl)-num.begin()+i) << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}