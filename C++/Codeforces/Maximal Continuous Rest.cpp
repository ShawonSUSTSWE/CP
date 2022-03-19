#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, maximum = 0, cnt = 0, o = 0;
    cin >> n;
    int a[n+1];
    for ( int i = 1; i <= n; i++ )
    {
        cin >> a[i];
    }
    for ( int i = 1; i <= n; i++ )
    {
        cnt = 0;
        if (!o)
        {
            while(a[i] && i <= n)
            {
                if ( i == n ) i = 0, o = 1;
                i++;
                cnt++;
            }
        }
        maximum = max(cnt,maximum);
    }
    cout << maximum << endl;
}
