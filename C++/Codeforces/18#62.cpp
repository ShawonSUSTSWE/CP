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
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define rep(i,n)        for(ll i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX

using namespace std;

ll n, cnt, a[2005], num[2005], b[2005];

int main()

{
    sl(n);
    rep(i,n)
    {
        sl(a[i]);
        b[i] = a[i];
    }
    sort(b+1,b+n+1,greater<int>());
    rep(i,n)
    {
        if(i==1) cnt = 1, num[b[i]] = cnt;
        else
        {
            if(num[b[i]]) cnt++;
            else num[b[i]] = ++cnt;
        }
    }
    rep(i,n)
    {
        cout << num[a[i]] << " ";
    }
}
