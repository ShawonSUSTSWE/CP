#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int row, column;
    cin >> row >> column;
    for ( int i = 1; i <= row; i++ )
    {
        for ( int j = 1; j <= column; j++ )
        {
            if ( i % 2 != 0 )
                cout << "#";
            else if ( i % 2 == 0 && (i/2) % 2 == 1 && j == column )
                cout << "#";
            else if ( i % 2 == 0 && (i/2) % 2 == 0 && j == 1 )
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}
