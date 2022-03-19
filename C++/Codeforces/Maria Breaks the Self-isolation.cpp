#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num[100005], T, n, ans;
    cin >> T;
    while(T--)
    {
        ans = 0;
        cin >> n;
        for ( int i = 1; i <= n; i++ )
            cin >> num[i];
        sort(num+1,num+n+1);
        for ( int i = 1; i <= n; i++ )
        {
            if ( num[i] <= i )
                ans = i;
        }
        cout << ans+1 << endl;
    }
}
