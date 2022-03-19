#include<bits/stdc++.h>
#define sff(a,b,c,n) scanf("%lld %lld %lld %lld", &a, &b, &c, &n)


using namespace std;

int main ()

{
    int T;
    long long int a, b, c, n, temp;
    scanf("%d", &T);
    for ( int i = 0; i < T; i++ )
    {
        sff(a,b,c,n);
        if ( n == 0 )
        {
            if ( a == b && b == c )
                {
                    printf("YES\n");
                    continue;
                }
            else
                {
                    printf("NO\n");
                    continue;
                }
        }

        if ( a == b && b == c )
        {
            if ( n % 3 == 0 )
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if ( a > b && a > c )
            {
                temp = a-b;
                b += temp;
                n -= temp;
                temp = a-c;
                c += temp;
                n -= temp;
                if ( n % 3 == 0 )
                {
                    printf("YES\n");
                    continue;
                }
                else
                {
                    printf("NO\n");
                    continue;
                }
            }
            if ( b > a && b > c )
            {
                temp = b-a;
                a += temp;
                n -= temp;
                temp = b-c;
                c += temp;
                n -= temp;
                if ( n % 3 == 0 )
                {
                    printf("YES\n");
                    continue;
                }
                else
                {
                    printf("NO\n");
                    continue;
                }
            }
            if ( c > b && c > a )
            {
                temp = c-b;
                b += temp;
                n -= temp;
                temp = c-a;
                a += temp;
                n -= temp;
                if ( n % 3 == 0 )
                {
                    printf("YES\n");
                    continue;
                }
                else
                {
                    printf("NO\n");
                    continue;
                }
            }
        }
    }
}
