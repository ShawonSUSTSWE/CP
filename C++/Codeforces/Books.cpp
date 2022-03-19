#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ll num, ans = 0, i = 1;
    cin >> num;
    while(num)
    {
        if ( num % 10 == 4 )
            ans += i;
        else
            ans += i*2;
        i *= 2;
        num /= 10;
    }
    cout << ans << endl;
}
