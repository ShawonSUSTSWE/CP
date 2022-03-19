#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[200020];

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, T;
    for ( cin >> T; T--; )
    {
        cin >> n;
        cout << n+(n-1)/9 << endl;
    }

}
