#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sd(a)           scanf("%d",&a)
#define sdd(a,b)        scanf("%d%d",&a,&b)
#define sdddd(a,b,c,d)  scanf("%d%d%d%d",&a,&b,&c,&d)
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
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX

using namespace std;

set<ll> s;
int num[100005];
vector <ll> prime;

void Sieve()

{
    ll ans = 2;
    for ( int i = 1; ans <= 1000000000; ans *= 2) s.insert(ans);
    num[0] = 1, num[1] = 1;
    for ( int i = 4; i < 100005; i += 2 ) num[i] = 1;
    for ( int i = 3; i < 100005; i += 2 )
    {
        if(!num[i])
        {
            prime.pb(i);
            if ( i <= sqrt(100005) )
                for ( int j = i*i; j < 100005; j += i*2 ) num[j] = 1;
        }
    }
}

int main()

{
    Sieve();
    int n, T, c = 0;
    for ( cin >> T; T--; c = 0 )
    {
        cin >> n;
        if ( n == 1 ) cout << "FastestFinger\n";
        else if ( n % 2 == 1 && n != 1) cout << "Ashishgup\n";
        else
        {
            if ( n == 2 )
            {
                cout << "Ashishgup\n";continue;
            }
            c = n/2;
            if ( s.find(c) != s.end() )
            {
                cout << "FastestFinger\n";
                continue;
            }
            else if ( (c < 100005 && num[c]) || c == 100005 ) cout << "Ashishgup\n";
            else if (  c < 100005 && num[c] == 0   ) cout << "FastestFinger\n";
            else
            {
                int o = 0;
                if ( c % 2 == 0 ) { cout << "Ashishgup\n"; continue;}
                for ( int i = 1; i < prime.size(); i++ )
                {
                    if( c % prime[i] == 0 )
                    {
                        cout << "Ashishgup\n";
                        o = 1;
                        break;
                    }
                }
                if(o == 0) cout << "FastestFinger\n";
            }
        }
    }

}
