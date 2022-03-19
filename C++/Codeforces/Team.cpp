#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_line, counter = 0;
    cin >> num_line;
    int line[num_line][3];
    for ( int i = 0; i < num_line ; i++ )
    {
        for ( int j = 0; j < 3; j++ )
        {
            cin >> line[i][j];
        }
        if ( line[i][0] + line[i][1] + line[i][2] >= 2 )
        {
            counter++;
        }
    }
    cout << counter << endl;
}
