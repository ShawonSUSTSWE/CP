#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    int x[n+1], y[n+1];
    if ( n % 2 != 0 )
    {
        cout << "nO\n";
        return 0;
    }
    for ( int i = 0; i < n; i++ )
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    x[n] = x[0];
    y[n] = y[0];
    for ( int  i = 0; i < n/2; i++)
    {
        if ( x[i+1]-x[i] != x[i+1+n/2]-x[i+n/2] || y[i+1]-y[i] != y[i+1+n/2]-y[i+n/2] )
        {
             cout << "nO\n";
             return 0;
        }

    }
    return 0;
}
