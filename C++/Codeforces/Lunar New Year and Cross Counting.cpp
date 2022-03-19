#include<bits/stdc++.h>

using namespace std;

string field[500];

bool isCross(int i, int j)

{
    if(field[i-1][j-1] == 'X' && field[i+1][j-1] == 'X' && field[i-1][j+1] == 'X' && field[i+1][j+1] == 'X')
        return true;
    else
        return false;
}

int main ()

{
    int n, ans = 0;
    cin >> n;
    for ( int i = 0; i < n; i++ )
        cin >> field[i];
    if ( n < 3 )
    {
        cout << "0\n";
        return 0;
    }
    for ( int i = 1; i < n-1; i++ )
    {
        for ( int j = 1; j < field[i].length()-1; j++ )
        {
            if( field[i][j] == 'X' && isCross(i,j) )
                ans++;
        }
    }
    cout << ans << endl;
}
