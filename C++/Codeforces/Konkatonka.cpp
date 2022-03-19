#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n;
    cin >> T;
    int a[100005], b[100005];
    while(T--)
    {
        int cnt = 0, c1 = 1, c2 = 1;
        cin >> n;
        for ( int i = 1; i <= n; i++ ) cin >> a[i];
        for ( int i = 1; i <= n; i++ ) cin >> b[i];
        sort(a+1,a+n+1),sort(b+1,b+n+1);
        while( c1 <= n && c2 <= n )
        {
            cout << a[c1] << " " << b[c2] << endl;
            if ( a[c1] > b[c2] ) c1++, c2++, cnt++;
            else c1++;
        }
        cout << cnt << endl;
    }
}
