#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, c[5];
    while(scanf("%d", &n)== 1)
    {
        int ans = 0;
        for ( int i = 0; i < 5; i++ )
        {
            cin >> c[i];
            if (c[i] == n)
                ans++;
        }
        cout << ans << endl;
    }
}
