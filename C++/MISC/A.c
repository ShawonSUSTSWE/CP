#include<bits/stdc++.h>
#define scanf("%lld %lld %lld", &a, &b, &c) sff(a,b,c)


using namespace std;

int main ()

{
    int T;
    long long int a, b, c, n, temp;
    scanf("%d", &T);
    for ( int i = 0; i < T; i++ )
    {
        sff(a,b,c);
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
                cout << a << b << c;
            }
        }
    }
}
