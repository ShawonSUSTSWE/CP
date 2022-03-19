#include<bits/stdc++.h>

using namespace std;

int num[200005], sum[200005];

int main ()

{
    int T, n, p, k, ans = 0;
    cin >> T;
    while(T--)
    {
        ans = 0;
        cin >> n >> p >> k;
        for ( int i = 0; i < n; i++ )
            cin >> num[i];
        sort(num, num+n);
        sum[0] = 0;
        for ( int i = 1; i <= n; i++ )
        {
            sum[i] = num[i-1]+(i>=k?sum[i-k]:sum[i-1]);
            //cout << sum[i] << " " << p << endl;
            if ( sum[i] <= p ) ans = i;
        }
        cout << ans << endl;
    }
}
