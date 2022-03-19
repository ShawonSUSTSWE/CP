#include<bits/stdc++.h>

using namespace std;

int lights[101];

int main ()

{
    int n, m, x, bulb;
    cin >> n >> m;
    while(n--)
    {
        cin >> x;
        while(x--)
        {
            cin >> bulb;
            lights[bulb] = 1;
        }
    }
    for ( int i = 1; i <= m; i++ )
    {
        if (!lights[i])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
