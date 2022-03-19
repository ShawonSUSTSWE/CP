#include<bits/stdc++.h>

using namespace std;

int main()

{
    int row, column;
    cin >> row >> column;
    char area[row+1][column+1];

    for ( int i = 1; i <= row; i++ )
        {
            for ( int j = 1; j <= column; j++ )
            scanf("%c", &area[i][j]);
        }
        for ( int i = 1; i <= row; i++ )
        {
            for ( int j = 1; j <= column; j++ )
            cout << area[i][j];

            cout << endl;
        }
    return 0;
}
