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

int main()

{
    testcase
    {
        ll chest, key, sum = 0, silvermax = 0;
        cin >> chest >> key;
        ll time[chest+1];
        for ( int i = 1; i <= chest; i++ )
        {
            cin >> time[i];
            sum += time[i];
        }
        sort(time+1,time+chest+1);
        for ( int i = chest, j = key; j > 0; j--, i-- )
        {
            silvermax = max(silvermax,time[i]);
            sum -= time[i];
        }
        cout << max(silvermax,sum) << nl;
    }
    return 0;
}
