#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long int BIGMOD ( long long int a, long long int b, long long int m )

{
    if ( b == 0 )
    {
        return 1;
    }
    int x = BIGMOD ( a, b/2, m );
    if ( b % 2 == 0 )
        return (x*x) % m;
    else
        return (((x*x) % m) * a) % m;
}


int main ()

{
    long long int a, b, m;
    while (scanf("%lld %lld %lld", &a, &b, &m)!= EOF )
    {

    cout << BIGMOD(a, b, m) << "\n";
    }
    return 0;
}
