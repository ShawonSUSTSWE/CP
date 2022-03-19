#include<bits/stdc++.h>

using namespace std;

bool prime[50];

int main ()

{
    int n, m;
    cin >> n >> m;
    for ( int i = 2; i*i <= 50; i++ )
    {
        if (!prime[i])
        {
            for ( int j = i*i; j <= 50; j += i )
            {
                prime[j] = true;
            }
        }
    }
    for ( int i = n+1; i <= m;i++)
    {
        if (!prime[i] && i == m)
        {
            cout << "YES\n";
            return 0;
        }
        else if (!prime[i] && i != m)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "NO\n";
}
