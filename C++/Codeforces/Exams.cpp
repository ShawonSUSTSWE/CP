#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string num;
    cin >> num;
    for ( int i = 0; i < num.length(); i++ )
    {
        if ( i == 0 && num[i] >= '5' && num[i] <= '8' )
            cout << '9'-num[i];
        else if ( i != 0 && num[i] >= '5' && num[i] <= '9' )
            cout << '9'-num[i];
        else
            cout << num[i];
    }
    cout << endl;
}
