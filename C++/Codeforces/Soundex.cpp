#include<bits/stdc++.h>

using namespace std;

bool notPrime[32768];
vector <int> Prime;

void sieve()

{
    for ( int i = 2; i < 32768; i++ )
    {
        if(!notPrime[i])
        {
            Prime.push_back(i);
            for ( int j = i*2; j < 32768; j += i )
            {
                notPrime[j] = true;
            }
        }
    }
}

int main ()

{
    sieve();
    int n;
    while(1)
    {
        cin >> n;
        if(!n)
            break;
        int x, y, ans = 0;
        for ( int i = 0; Prime[i] < n; i++ )
        {
            x = Prime[i], y = n-x;
            if ( x > y ) break;
            if (!notPrime[y]) ans++;
        }
        cout << ans << endl;
    }
}
