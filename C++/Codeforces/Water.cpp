#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ll T, n, a, b;
    cin >> T;
    while(T--)
    {
        cin >> n >> a >> b;
        if ( a*2 < b )
            cout << n*a << endl;
        else
            cout << ((n/2)*b)+((n%2)*a) << endl;
    }
}
