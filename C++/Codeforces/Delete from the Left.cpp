#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, ans = 0, k;
    cin >> n >> k;
    int num[n+1];
    for ( int i = 1; i <= n; i++ )
        cin >> num[i];
    sort ( num+1, num+n+1);
    for ( int i = n; i >= 1; i -= k )
        ans += 2*(num[i]-1);
    cout << ans << endl;
}
