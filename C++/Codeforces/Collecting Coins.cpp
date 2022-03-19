#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int len, div;
    cin >> len >> div;
    if ( len == 1 && div == 10 )
        cout << "-1\n";
    else
    {
        for( int i = 1; i <= len; i++ )
        {
            if ( div == 10 )
            {
                if ( i == 1 )
                    cout << "1";
                else
                    cout << "0";
            }
            else
                cout << div;
        }
        cout << endl;
    }
    return 0;
}
