#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    while ( cin >> n && n != 0 )
    {
        int temp = n, divisor = 1;
        cout << temp << " = ";
        for ( int i = 2; i*i <= n; i++ )
            if ( n % i == 0 )
             divisor++;
        for ( int i = 2; i*i <= n; i++ )
        {
            while(n%i == 0)
            {
                cout << i;
                n /= i;
                if ( n != 1 ) cout << " * ";
            }
        }
        if ( n == 1 ) cout << endl;
        else cout << n << endl;
        cout << "With " << temp << " marbles, " << divisor << " different rectangles can be constructed." << endl;
    }
}
