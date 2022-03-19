#include<bits/stdc++.h>

using namespace std;

int main()

{
    int rows, b;
    vector <int> block;
    cin >> rows;
    for ( int i = 0; i < rows; i++ )
    {
        cin >> b;
        block.push_back(b);
    }
    sort(block.begin(), block.end());
    for ( int i = 0; i < rows; i++ )
    {
        if ( i != rows-1 )
        cout << block[i] << " ";
        else
            cout << block[i] << endl;
    }
    return 0;
}
