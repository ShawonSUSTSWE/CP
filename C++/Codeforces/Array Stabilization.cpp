#include<bits/stdc++.h>

using namespace std;

double n,m,ans;

int main()
{
    cin >> n >> m;
    for ( double i = 0; i <= n; i++ )
    {
        ans += (pow(i/n,m)-pow((i-1)/n,m))*i;
    }
    cout << fixed << setprecision(10) << ans << endl;
}
