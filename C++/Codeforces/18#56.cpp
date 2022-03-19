#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%lld",&a)
#define sff(a,b)        scanf("%lld%lld",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%lld\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)

using namespace std;

ll n, k, A, B, a[1000005];

ll rec ( int l, int r )

{
    ll mid = (l+r)/2;
    ll c = upper_bound(a,a+k,r)-lower_bound(a,a+k,l);
    if ( c == 0 ) return A;
    if ( l == r ) return B*c;
    return min(c*B*(r-l+1),rec(l,mid)+rec(mid+1,r));
}


int main ()

{
    cin>>n>>k>>A>>B;
    for(ll i=0;i<k;i++)
        sf(a[i]);
    sort(a,a+k);
    cout<<rec(1,(1ll<<n))<<endl;
}
