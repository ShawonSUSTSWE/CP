#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    string flight;
    cin >> n >> flight;
    int sf = 0, fs = 0;
    for ( int i = 0; i < flight.length()-1; i++ )
    {
        if ( flight[i] == 'S' && flight[i+1] == 'F' )
            sf++;
        else if ( flight[i] == 'F' && flight[i+1] == 'S' )
            fs++;
    }
    if ( sf > fs ) cout << "YES\n";
    else cout << "NO\n";
}
