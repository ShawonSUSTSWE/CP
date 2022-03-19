#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    cin >> n;
    for ( int i = n, curr; i >= 1; i--)
    {
        if ( n % i == 0 )
        {
            cout << i << " ";
            n = i;
        }
    }
    cout << endl;
}
