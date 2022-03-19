#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, c1 = 0, c0 = 0;
    string num;
    cin >> n;
    cin >> num;
    for ( int i = 0; i < num.length(); i++ )
    {
        if ( num[i] == '1' )
            c1++;
        else
            c0++;
    }
    cout << n-(min(c0,c1)*2) << endl;
}
