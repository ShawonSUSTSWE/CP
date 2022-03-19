#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int n, m, ans = 0, k;
    cin >> n >> m;
    for ( int i = 0; i*i <= n; i++ )
    {
        k = n-(i*i);
        if ( m == k*k + i )
            ans++;
    }
    cout << ans << endl;
}
