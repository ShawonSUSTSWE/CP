#include<bits/stdc++.h>

using namespace std;

int num[2000009];

int main ()

{
    int n, m, k, bone = 1, a, b, o = 0;
    scanf("%d %d %d", &n, &m, &k);
    while(m--) scanf("%d", &a), num[a] = 1;
    if(num[1]) o = 1;
    while(k--)
    {
        scanf("%d %d", &a, &b);
        if ( (num[b]) && !o && ( bone == a || bone == b ) )
        {
            if ( bone == a )
                bone = b, o = 1;
            else bone = a, o = 1;
        }
        if(!o && ( bone == a || bone == b ) )
        {
            if ( bone == a )
                bone = b;
            else bone = a;
        }
    }
    printf("%d\n",bone);
}
