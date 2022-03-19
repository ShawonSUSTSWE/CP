#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll Coin[10000];

int main()

{
    ll num;
    Coin[0] = 1;
    for ( ll i = 1; i*i*i < 10000; i++ )
    {
        for ( ll j = i*i*i; j < 10000; j++ )
        {
            Coin[j] += Coin[j-i*i*i];
        }
    }
    while(scanf("%lld", &num)==1)
    {
        printf("%lld\n", Coin[num]);
    }

}
