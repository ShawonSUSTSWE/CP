#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, a[5005], num;
    bool pos = false;
    cin >> T;
    while(T--)
    {
        pos = false;
        memset(a,0,sizeof(a));
        cin >> n;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> num;
            if (!a[num]) a[num] = i;
            else
            {
                if ( a[num] != i-1 )
                    pos = true;
            }
        }
        if (pos) cout << "YES\n";
        else cout << "NO\n";
    }
}
