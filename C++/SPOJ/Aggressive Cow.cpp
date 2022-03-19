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

using namespace std;

int n, c, a[100005];

bool check ( int mid )

{
    int cnt = 1;
    int pr = a[1];
    for ( int i = 2; i <= n; i++ )
    {
        if ( a[i]-pr >= mid )
            cnt++, pr = a[i];
        if ( cnt >= c ) return true;
    }
    return false;
}



int main()

{
    int T;
    for(sd(T);T--;)
    {
        sdd(n,c);
        for ( int i = 1; i <= n; i++ ) sd(a[i]);
        sort(a+1,a+n+1);
        int low = 0, high = 1000000005, ans = 0;
        while(low <= high)
        {
            int mid = (low+high)/2;
            if (check(mid)) ans = mid, low = mid+1;
            else high = mid-1;
        }
        pd(ans);
    }
}
