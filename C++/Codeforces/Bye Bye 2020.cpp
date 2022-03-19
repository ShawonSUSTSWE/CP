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
    testcase
    {
        map<string,int> s;
        int n, cnt = 0;
        cin >> n;
        double a[n+1];
        for ( int i = 1; i <= n; i++ ) cin >> a[i];
        for ( int i = 1; i < n; i++ )
        {
            for ( int j = i+1; j <= n; j++ )
            {
                double side1, side2, side3, p;
                side1 = sqrt(a[i]*a[i]+1);
                side2 = sqrt(a[j]*a[j]+1);
                side3 = abs(a[i]-a[j]);
                if ( side1+side2 > side3 && side1+side3 > side2 && side3+side2 > side1 )
                {
                    p = (side1+side2+side3)/2;
                    p = sqrt(p*(p-side1)*(p-side2)*(p-side3));
                    string num = to_string(p);
                    if (!s[num]) cnt++, s[num]++;
                    else s[num]++;
                }
                else
                    break;
            }
        }
        cout << s.size() << nl;
    }
    return 0;
}
