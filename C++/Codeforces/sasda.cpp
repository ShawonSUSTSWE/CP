//413933789280
#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%lld",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%lld\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)

using namespace std;

int main ()

{
    ll a;
    sf(a);
    for ( ll i = 2; i*i <= a; i++ )
    {
        while ( a % (i*i) == 0) a /= i;
    }
    cout << a << endl;
}
