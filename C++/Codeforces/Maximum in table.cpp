#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    cin >> n;
    if ( n == 1 )
    {
        cout << n << endl;
        return 0;
    }
    else
    {
        int tile[n][n];
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                if( i == 0 || j == 0 )
                {
                    tile[i][j] = 1;
                }
                else
                {
                    tile[i][j] = tile[i-1][j]+tile[i][j-1];
                }
            }
        }
        cout << tile[n-1][n-1] << endl;
        return 0;
    }
}
