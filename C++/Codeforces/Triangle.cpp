#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int x, y;
    cin >> x >> y;
    int ans = abs(x)+abs(y);
    if ( x > 0 && y > 0)
    {
        printf("0 %d %d 0\n", ans, ans);
    }
    else if ( x > 0 && y < 0)
    {
        printf("0 %d %d 0\n", -ans, ans);
    }
    else if ( x < 0 && y > 0)
    {
        printf("%d 0 0 %d\n", -ans, ans);
    }
    else if ( x < 0 && y < 0)
    {
        printf("%d 0 0 %d\n", -ans, -ans);
    }
}
