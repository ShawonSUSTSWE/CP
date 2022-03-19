#include<bits/stdc++.h>

using namespace std;

struct table {
    int pos;
    int height;
}num[1005];

bool compare ( table i, table j )
{
    if( i.height == j.height )
        return i.pos < j.pos;
    else
        return i.height > j.height;
}


int main ()

{
    int n, t1, t2, k, ux, vx;
    cin >> n >> t1 >> t2 >> k;
    k = 100-k;
    for ( int i = 1 ; i <= n; i++ )
    {
        cin >> ux >> vx;
        num[i].height = max(ux*t1*k+vx*t2*100, vx*t1*k+ux*t2*100);
        num[i].pos = i;
    }
     sort ( num+1, num+1+n, compare );

     for ( int i = 1; i <= n; i++ )
     {
         printf("%d %.2f\n", num[i].pos, num[i].height/100.00);
     }
}
