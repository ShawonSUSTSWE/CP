#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ll n, k, T;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        cout << k+((k-1)/(n-1)) << endl;
    }
}
