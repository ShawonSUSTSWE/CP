#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll num[500005];

int main()

{
	ll T, n;
	cin >> T;
	for ( ll i = 3; i <= 500001; i += 2 )
    {
        num[i] = 8*((i-1)/2)*((i-1)/2);
        num[i] += num[i-2];
    }
	while(T--)
    {
        cin >> n;
        cout << num[n] << endl;
    }
}

