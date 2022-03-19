#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long

using namespace std;

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, minprice, amount, price, sum = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++ )
    {
        cin >> amount >> price;
        if ( i == 1 )
            minprice = price;
        else
            minprice = min(price,minprice);
        sum += (amount*minprice);
    }
    cout << sum << endl;
}
