#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll T;
    cin >> T;
    while(T--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        cout << ((n/2)+(n%2))*a-((n/2)*b) << endl;
    }
}
