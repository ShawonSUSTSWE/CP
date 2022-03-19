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
    int a, b;
    string mapofcity;
    testcase
    {
        cin >> a >> b >> mapofcity;
        int first = 0, last = 0, cost = 0, ff = 0, c1 = 0, l = 0, subl = 0, subc = 0, sub0 = 0;
        vector <int> unoc;
        for ( int i = 0; i < mapofcity.length(); i++ )
        {
            if ( !ff && mapofcity[i] == '1' ) first = i, ff = 1;
            if ( mapofcity[i] == '1') last = i, c1++, subl++;
            if ( sub0 && mapofcity[i] == '0') sub0++;
            if ( last != first && sub0 && mapofcity[i] == '1') unoc.pb(sub0), sub0 = 0;
            if ( subl && mapofcity[i] == '0') subc++, subl = 0, sub0++;
        }
        //for ( int i = 0; i < unoc.size(); i++ ) cout << unoc[i] << nl;
        sort(unoc.begin(),unoc.end());
        if ( c1 == first-last+1 ) cout << a << nl;
        else
        {
            for(int k = 0; k < unoc.size(); )
            {
                if ( unoc[k]*b < 2*a ) cost += unoc[k]*b, subc--, k++;
                else break;
            }
            cost += subc*a;
            cout << cost << nl;
        }

    }
}
