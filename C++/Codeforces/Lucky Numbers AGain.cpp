#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string number;
    int num4 = 0, num7 = 0;
    cin >> number;
    for ( int i = 0; i < number.length(); i++ )
    {
        if ( number[i] == '4' )
            num4++;
        else if ( number[i] == '7' )
            num7++;
    }
    if ( num4+num7 == 4 || num4+num7 == 7 )
        cout << "YES\n";
    else
        cout << "NO\n";
    return  0;
}
