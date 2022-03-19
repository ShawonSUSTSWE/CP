#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, m, sum = 0, a;
    cin>> T;
    while(T--)
    {
        sum = 0;
        cin >> n >> m;
        for ( int i = 1; i <= n; i++ ) cin >> a, sum += a;
        cout << min(sum,m) << endl;
    }
}
