#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T;
    cin >> T;
    int a, b, c, d, e, f, g, h, i, j, k, l;
    for ( int o = 1; o <= T; o++ )
    {
        scanf("%d:%d %d:%d", &a, &b, &c, &d);
        i = 60*a+b;
        j = 60*c+d;
        scanf("%d:%d %d:%d", &e, &f, &g, &h);
        k = 60*e+f;
        l = 60*g+h;
        if ( i > l || k > j )
        {
            printf("Case %d: Hits Meeting\n", o);
        }
        else
            printf("Case %d: Mrs Meeting\n", o);
    }
}
