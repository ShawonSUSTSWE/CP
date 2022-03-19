#include<bits/stdc++.h>

using namespace std;

long long int num[500005], n, cnt, ans, p;

int main()

{
    cin >> n;
    for ( int i = 1; i <= n; i++ )
    {
        scanf("%lld", &num[i]);
        num[i] += num[i-1];
    }
    for ( int i = 1; i < n; i++ )
    {
        if (num[n]%3)
        {
            cout << "0\n";
            return 0;
        }
        else
        {
            p = num[n] / 3;
        }
        if ( num[i] == 2*p ) ans += cnt;
        if ( num[i] == p ) cnt++;
    }
    cout << ans << endl;
}
