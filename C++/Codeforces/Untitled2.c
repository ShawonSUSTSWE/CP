#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int x;
    cin >> x;
    if ( x % 2 == 0 )
    {
        cout << x/2 << endl;
    }
    else
        cout << "-" << x-1/2 << endl;
}
