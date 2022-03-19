#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        pair <int,int> co[n+1];
        for ( int i = 1; i <= n; i++ )
            cin >> co[i].first >> co[i].second;
        sort(co+1,co+n+1);
        string path = "";
        int x = 0, y = 0, pos = 1, u, v;
        for ( int i = 1; i <= n; i++ )
        {
            u = co[i].first, v = co[i].second;
            if ( v < y )
            {
                pos = 0;
                cout << "NO\n";
                break;
            }
            path += string(u-x,'R');
            path += string(v-y,'U');
            x = u;
            y = v;
        }
        if (pos) cout << "YES\n" << path << endl;
    }
}
