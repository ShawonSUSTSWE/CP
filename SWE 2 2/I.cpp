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

ull num[2000005], prefix[2000005], suffix[2000005], cummulative_sum[2000005];

int main()

{
    ull n, max_length;
    testcase
    {
        max_length = 0;
        ull checker_sum = 0, ans = INF;
        memset(prefix,0,sizeof(prefix));
        memset(suffix,0,sizeof(suffix));
        memset(cummulative_sum,0,sizeof(cummulative_sum));
        cin >> n;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> num[i];
            cummulative_sum[i] = num[i];
            if( i > 1 ) cummulative_sum[i] += cummulative_sum[i-1];
        }
        prefix[1] = 1, suffix[n] = 1;
        for ( int i = 2, j = n-1; i <= n; i++, j-- )
        {
            prefix[i] = min(prefix[i-1]+1, num[i]);
            suffix[j] = min(suffix[j+1]+1, num[j]);
        }
        for ( int i = 1; i <= n; i++ )
        {
            //cout << cummulative_sum[i] << " ";
            max_length = max(max_length,min(prefix[i],suffix[i]));
        }
        //cout << nl;
        checker_sum = ((max_length*(max_length+1))/2)+((max_length*(max_length-1))/2);
        //cout << checker_sum << nl;
        for ( int i = 1; i <= n; i++ )
        {
            if ( max_length == min(prefix[i],suffix[i]) )
            {
                //cout << cummulative_sum[i+max_length-1] << " " << cummulative_sum[i-max_length-1] << nl;
                ans = min(ans,(cummulative_sum[i+max_length-1]-cummulative_sum[i-max_length])-checker_sum);
            }
        }
        cout << max_length*2-1 << " " << ans << nl;
    }
    return 0;
}
