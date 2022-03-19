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
        int x, y, l = 0, r = 0, u = 0, d = 0;
        bool pos1 = false, pos2 = false;
        string coordinate;
        cin >> x >> y >> coordinate;
        for ( int i = 0; i < coordinate.length(); i++ )
        {
            if(coordinate[i] == 'L') l++;
            else if(coordinate[i] == 'R') r++;
            else if(coordinate[i] == 'U') u++;
            else d++;
        }
        //cout << l << " " << r << " " << d << " " << u << nl;
        if ( x > 0 )
        {
            if ( r >= x ) pos1 = true;
        }
        else if ( x == 0 ) pos1 = true;
        else
        {
            if ( l >= abs(x) ) pos1 = true;
        }
        if ( y > 0 )
        {
            if ( u >= y ) pos2 = true;
        }
        else if ( y == 0 ) pos2 = true;
        else
        {
            if ( d >= abs(y) ) pos2 = true;
        }
        if ( pos1 && pos2 ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
