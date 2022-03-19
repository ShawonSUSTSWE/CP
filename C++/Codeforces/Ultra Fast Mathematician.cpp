#include<bits/stdc++.h>

using namespace std;

int main()

{
    string num1, num2;
    char result[101];
    cin >> num1 >> num2;
    for ( int i = 0; i < num1.length(); i++ )
    {
        if ( num1[i] == '1' )
        {
            if ( num2[i] == '0')
                result[i] = '1';
            else if ( num2[i] == '1' )
                result[i] = '0';
        }
        if ( num1[i] == '0' )
        {
            if ( num2[i] == '0')
                result[i] = '0';
            else if ( num2[i] == '1' )
                result[i] = '1';
        }
    }
    for ( int i = 0; i < num1.length(); i++ )
        cout << result[i] ;
    cout << endl;
    return 0;
}
