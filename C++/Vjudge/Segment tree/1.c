#include<bits/stdc++.h>

using namespace std;

int main ()

{
    long long int a, b, c;
    cin >> a >> b >> c;
    if ( a % c != 0 || b % c != 0 )
    {
        if( a % c != 0 && b % c != 0 )
        {
            cout << ((a/c)+1)*((b/c)+1) << endl;
            return 0;
        }
        else if ( a % c == 0 )
        {
            cout << (a/c)*((b/c)+1) << endl;
            return 0;
        }
        else
        {
            cout << ((a/c)+1)*(b/c) << endl;
        }
    }
    else
    {
        cout << (a/c)*(b/c) << endl;
    }
}
