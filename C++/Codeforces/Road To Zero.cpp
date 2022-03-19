#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ll T, a, b, x, y;
    cin >> T;
    while(T--)
    {
        cin >> x >> y >> a >> b;
        cout << min(min(x,y)*b+abs(x-y)*a,(x+y)*a) << endl;
    }
}
