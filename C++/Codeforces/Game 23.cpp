#include<bits/stdc++.h>
#define ll long long


using namespace std;

int num[5005];

int main ()

{
    ll T, p, q, b;
    cin >> T;
    while(T--)
    {
        scanf("%lld %lld %lld", &p ,&q, &b);
        ll gcd = __gcd(p,q);
        q /= gcd;
        while(b > 1 && q != 1)
        {
            b = __gcd(q,b);
            q /= b;
        }
        if ( q > 1 )
            printf("Infinite\n");
        else
            printf("Finite\n");
    }
}
