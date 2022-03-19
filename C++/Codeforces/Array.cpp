#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, d;
    cin >> n >> d;
    int num[n+1];
    for ( int i = 1; i <= n; i++ ) cin >> num[i];
    if ( d == n ) for ( int i = 1; i <= n; i++ ) cout << num[i];
    else
    {
        for ( int i = d+1; i <= n; i++ )
        {
            cout << num[i] << " ";
            if ( i == n ) i = 0;
            if ( i == d ) break;
        }
    }
}
