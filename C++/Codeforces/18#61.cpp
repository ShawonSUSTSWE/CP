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
#define slll(a,b,c,d)   scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
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
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             1000000007

using namespace std;

int main()

{
    ll T, n, k;
    for ( cin >> T; T--; )
    {
        sll(n,k);
        ll a[n+1], fri[k+1], ans = 0, d = 0;
        rep(i,n) sl(a[i]);
        sort(a+1,a+n+1,greater <ll>());
        rep(i,k) sl(fri[i]);
        sort(fri+1,fri+k+1,greater <ll>());
        rep(i,k)
        {
            cout << a[n-d] << " " <<
            ans += (a[n-d]+a[n-d+1-fri[i]]);
            d += fri[i];
        }
        pl(ans);
    }
}
