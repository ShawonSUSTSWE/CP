#include<bits/stdc++.h>

using namespace std;

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T, n, k, maximum = 0, ans = 0;
    vector <int> num[1005], distinct;
    cin >> T;
    while(T--)
    {
        maximum = 0, ans = 0;
        cin >> n;
        memset(num,0,sizeof(num));
        distinct.clear();
        for ( int i = 1; i <= n; i++ )
        {
            cin >> k;
            if ( num[k].size() == 0 )
            {
                num[k].push_back(i);
                distinct.push_back(k);
            }
            else
            {
                if ( num[k][num[k].size()-1] != i-1 )
                    num[k].push_back(i);
            }
        }
        sort(distinct.begin(),distinct.end());
        for ( int i = 0; i < distinct.size(); i++ )
        {
            if ( maximum < num[distinct[i]].size() )
            {
                maximum = num[distinct[i]].size();
                ans = distinct[i];
            }
        }
        cout << ans << endl;
    }
}
