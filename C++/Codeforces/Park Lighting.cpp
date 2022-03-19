#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, k, ans = 0;
    cin >> T;
    while(T--)
    {
        ans = 0;
        cin >> n >> k;
        ans = (n/k)*k;
        ans += min(n-ans,k/2);
        cout << ans << endl;
    }
}
