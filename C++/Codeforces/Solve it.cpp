#include<bits/stdc++.h>

using namespace std;

int p, q, r, s, t, u;

double funct(double x)
{
  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

int main()

{
    double low, mid, high, x;
    while( scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) == 6 )
    {
        if ( funct(0)*funct(1) > 0)
        {
            printf("No Solution\n");
            continue;
        }
        low = 0.0, high = 1.0;
        for ( int i = 0; i < 30; i++ )
        {
            mid = (low+high)/2;

            x = funct(mid);
            if ( x > 0 ) low = mid;
            else high = mid;
        }
        printf("%.4f\n", low);
    }
}
