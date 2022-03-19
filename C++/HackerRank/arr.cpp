#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a_arr[3], b_arr[3], a  = 0, b = 0;
    for ( int i = 0; i < 3; i++ )
    {
        cin >> a_arr[i];
    }
    for ( int i = 0; i < 3; i++ )
    {
        cin >> b_arr[i];
    }
    for ( int i = 0; i < 3; i++ )
    {
        if ( a_arr[i] > b_arr[i] )
        {
            a++;
        }
        else if ( b_arr[i] > a_arr[i] )
        {
            b++;
        }
    }
    cout << a << " " << b << "\n";
    return 0;
}
