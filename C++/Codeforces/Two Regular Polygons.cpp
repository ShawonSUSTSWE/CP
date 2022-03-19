#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ll n, c, cnt;
    cin >> n >> c;
    ll t[n+1];
    cnt = 1;
    for ( ll i = 1; i <= n; i++ )
    {
        cin >> t[i];
        if ( i != 1 )
        {
            if(t[i]-t[i-1]<= c)
                cnt++;
            else
            {
                cnt = 1;
            }
        }
    }
    cout << cnt << endl;
}
