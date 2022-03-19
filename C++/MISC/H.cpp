#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num, change = 0;
    string balloon;
    cin >> num >> balloon;
    for ( int i = 0; i < num; i++ )
    {
        if ( i != 0 || i != num-1 )
        {
            if ( balloon[i] == balloon[i+1] || balloon[i] == balloon[i-1] )
            {
                change = 1;
                break;
            }
        }
        else
        {
            if ( i == 0 )
            {
                if ( balloon[i] == balloon[i+1] )
                {
                    change = 1;
                    break;
                }
            }
            else if ( i == num-1 )
            {
                if ( balloon[i] == balloon[i-1] )
                {
                    change = 1;
                    break;
                }
            }
        }
    }
    if ( change == 0 )
        cout << "No change needed\n";
    else
        cout << "Change needed\n";
    return 0;
}
