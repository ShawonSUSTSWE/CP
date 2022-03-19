#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T;
    for ( cin >> T; T--;)
    {
        long double ans, s, v;
        cin >> s >> v;
        ans = (s*2)/(3*v);
        cout << fixed << setprecision(9) << ans << endl;
    }
}
