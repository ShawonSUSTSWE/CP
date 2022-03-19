#include<bits/stdc++.h>

using namespace std;

int main ()

{
    unsigned long long int n;
    int q, r1, r2, r3;
    cin >> q;
    while(q--)
    {
        cin >> n;
        if ( n == 1 ) { cout << "0\n"; continue; }
        for ( int i = 1; n > 1; i++ )
        {
            r1 = 0, r2 = 0, r3 = 0;
            if ( n % 2 == 0 )
            {
                n /= 2;
                r1 = 1;
            }
            else if ( n % 3 == 0 )
            {
                n /= 3;
                n *= 2;
                r2 = 1;
            }
            else if ( n % 5 == 0 )
            {
                n /= 5;
                n *= 4;
                r3 = 1;
            }
            if ( !r1 && !r2 && !r3 )
            {
                cout << "-1\n"; break;
            }
            if ( n == 1 ) cout << i << endl;
        }
    }
}
