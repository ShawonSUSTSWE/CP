#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n, ans[501], sum_n[501][501];

int main()

{
    long long int sum, n;
    for ( ll i = 1; i < 501; i++)
    {
        for ( ll j = i+1; j < 501; j++)
        {
            sum_n[i][j] = sum_n[i][j-1] + __gcd(i, j);
            ans[j] += sum_n[i][j];
        }
    }
    while(1)
    {
        scanf("%lld", &n);
        if(!n)
            return 0;
        printf("%lld\n", ans[n]);
    }
}
