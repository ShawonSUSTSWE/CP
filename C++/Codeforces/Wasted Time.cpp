#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)  scanf("%d%d%d%d",&a,&b,&c,&d)
#define pf(a)           printf("%llu\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX

using namespace std;

int main()

{
    int x, y, X, Y, n, l = 0, r = 0, u = 0, d = 0, num = 0;
    sfff(n,X,Y);
    rep(i,n)
    {
        sff(x,y);
        if ( x < X ) l++; else if ( x > X ) r++;
        if ( y < Y ) d++; else if ( y > Y ) u++;
    }
    num = max(max(l,r),max(d,u));
    if ( num == l ) X--;else if ( num == r ) X++;
    else if ( num == d ) Y--; else Y++;
    cout << num << endl << X << " " << Y << endl;
}
