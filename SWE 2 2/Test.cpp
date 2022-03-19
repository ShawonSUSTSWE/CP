#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n,index,m;
    string str;
    char ch;
    cin >> t;
    ll casev = 1;
    while (t--)
    {
        cin >> n;
        cin >> str;
        cin >> m;
        ll arr[27];
        for (ll i = 0; i < 28 - 1; i++)
            arr[i] = 0;
        for (auto i : str)
        {
            cout << i << endl;
            arr[i - 'a']++;
        }


            ll ans[m],j=0;///////ans prin korar jonno array

        while (m--)
        {
            cin >> index >> ch;
            arr[str[index - 1] - 'a']--;
            str[index - 1] = ch;
            arr[ch - 'a']++;
            ll len = 0;
            ll f = 0;
            for (char c = 'a'; c <= 'z'; c++)
            {
                ll cc = c - 'a';
                len += arr[cc] - (arr[cc] % 2);
                if (arr[cc] & 1)
                    f = 1;
            }
            ans[j]=len+f;//////ans array te value store
            j++;
        }
        cout << "Case " << casev++ << ":" << endl;
        for(ll i=0;i<j;i++)
        {
            cout<<ans[i]<<endl;////////then print ans array
        }

    }
    return 0;
}
