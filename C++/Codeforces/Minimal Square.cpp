#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, ans, p[55];
    cin >> T;
    while(T--)
    {
        ans = 1000;
        cin >> n;
        for ( int i = 1; i <= n; i++ ) cin >> p[i];
        sort(p+1,p+n+1);
        for ( int i = 2; i <= n; i++ ) ans = min(ans,p[i]-p[i-1]);
        cout << ans << endl;
    }
}
