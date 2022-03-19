#include<bits/stdc++.h>

using namespace std;

int main()

{
    int row;
    cin >> row;
    string bus[row];
    for ( int i = 0; i < row; i++ )
    {
        cin >> bus[i];
    }
    for ( int i = 0; i < row; i++ )
    {
        if ( bus[i][0] == 'O' && bus[i][1] == 'O' )
        {
            bus[i][0] = '+';
            bus[i][1] = '+';
            cout << "YES\n";
            for ( int i = 0; i < row; i++ )
            {
                cout << bus[i] << endl;
            }
            return 0;
        }
        if ( bus[i][3] == 'O' && bus[i][4] == 'O' )
        {
            bus[i][3] = '+';
            bus[i][4] = '+';
            cout << "YES\n";
            for ( int i = 0; i < row; i++ )
            {
                cout << bus[i] << endl;
            }
            return 0;
        }
    }
    cout << "NO\n";
}
