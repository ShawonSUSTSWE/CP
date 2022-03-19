#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, c = 1;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);
        int r = 0, l;
        scanf("%d", &l);
        for ( int i = 2; i <=n; i++ )
        {
            scanf("%d", &l);
            int l_i = (i-1)-l;
            if ( l_i <= r )
                r++;
        }
        printf("Case %d: %d\n", c++, r+1);
    }
}
