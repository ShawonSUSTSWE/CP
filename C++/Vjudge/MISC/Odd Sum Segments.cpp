#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector < long long > odd;

int main()

{
    bool pos = false;
    int T, n, k, n_odd, pre;
    cin >> T;
    while(T--)
    {
        n_odd = 0;
        pos = false;
        odd.clear();
        cin >> n >> k;
        ll num[n+1];
        for ( int i = 1; i <= n; i++ )
        {
            cin >> num[i];
            if (num[i] % 2)
                n_odd++;
        }
        if ( n_odd % 2 != k % 2 || n_odd < k )
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if ( n_odd > k )
            pos = true;
        for ( int i = 1; i <= n; i++ )
        {
            if ( num[i] % 2 )
            {
                if(pos)
                {
                    n_odd--;
                    if ( n_odd == k )
                        pos = false;
                }
                else
                {
                    if ( n_odd != k )
                      {
                         odd.push_back(pre);
                      }
                    n_odd--;
                    pre = i;
                }
            }
        }
        if ( odd.size() > 0 )
        {
            if ( odd[odd.size()-1] != n )
                odd.push_back(n);
        }
        else
            odd.push_back(n);
        for ( int i = 0; i < odd.size(); i++ )
        {
            if(i)
                printf(" ");
            printf("%lld", odd[i]);
        }
        printf("\n");
    }
}
