#include<bits/stdc++.h>
#define ll long long


using namespace std;

vector<ll> square;

int main()

{
    ll num = 1;
    square.push_back(1);
    for ( int i = 1; i <= 30; i++ )
    {
        num = num<<1;
        square.push_back(num);
    }
    ll bact, ans = 0;
    cin >> bact;
    while(bact>0)
    {
        int j = 0;
        for ( j = 0; square[j] <= bact; j++ )
        {
            ;
        }
        bact -= square[j-1];
        ans++;
    }
    cout << ans << endl;
}
