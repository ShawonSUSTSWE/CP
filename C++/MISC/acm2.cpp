#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int T, n, k, i;
    scanf("%lld", &T);
    for ( k = 0; k < T; k++ )
    {
        scanf("%lld", &n);
        long long int num[n], cnt0 = 0, cnt1 = 0;
        for ( i = 0; i < n; i++ )
        {
            scanf("%lld", &num[i]);
            if ( num[i] % 2 == 0 )
                cnt0++;
            else
                cnt1++;
        }
        if ( cnt1 >= cnt0 )
            printf("2 1\n");
        else
            printf("2 0\n");
    }
     return 0;
}
