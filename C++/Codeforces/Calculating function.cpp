#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n, k, num;
    cin >> n >> k;
    if ( n % 2 == 0)
    {
        if ( k <= n/2 )
        {
            num = k*2-1;
            cout << num << endl;
        }
        else
        {
            num = (k-n/2)*2;
            cout << num << endl;
        }
    }
    else
    {
        if ( k <= (n+1)/2 )
        {
            num = k*2-1;
            cout << num << endl;
        }
        else
        {
            num = ( k - ((n+1)/2) )*2;
            cout << num << endl;
        }
    }
    return 0;
}
