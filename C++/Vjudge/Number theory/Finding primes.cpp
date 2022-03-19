#include<bits/stdc++.h>

using namespace std;

int prime[10000005], sum[10000005];

int main()

{
    for ( int i = 2; i <= sqrt(10000000); i++ )
    {
        if(!prime[i])
        {
            for ( int j = 2*i; j <= 10000000; j += i )
                prime[j] = 1;
        }
    }
    for ( int i = 2; i <= 10000000; i++ )
    {
        if(!prime[i]) sum[i] = sum[i-1]+1;
        else sum[i] = sum[i-1];
    }
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        printf("%d\n", sum[n]-sum[n/2]);
    }
}
