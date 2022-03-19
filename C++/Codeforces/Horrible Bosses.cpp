#include<bits/stdc++.h>

using namespace std;

bool ans[5000006], t[5000006];

int main()
{
    for ( int i = 2; i * i < 5000006; i++ )
    {
        if (!t[i])
        {
            for ( int j = i * i; j < 5000006; j += i )
                t[j] = true;
        }
    }
    for ( int i = 2; i < 5000006; i++ )
    {
        if ( t[i] == 0 && i % 4 == 1 )
        {
            for (int j = i; j < 5000006; j += i )
                ans[j] = true;
        }
    }
    int T, n;
    for ( scanf("%d", &T); T--;)
    {
        scanf("%d", &n);
        if(ans[n]) printf("YES\n");
        else printf("NO\n");
    }
}
