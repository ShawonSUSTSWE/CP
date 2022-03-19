#include<bits/stdc++.h>

using namespace std;

int main ()

{
        int n, skill, ans = 0, o = 0;
        cin >> n >> skill;
        int a[n+1];
        for ( int i = 1; i <= n; i++ ) cin >> a[i];
        for ( int i = 1, j = n; ;)
        {
                o = 0;
                if ( i > j ) break;
                if ( a[i] <= skill && i != j) ans++, i++, o = 1;
                if ( a[j] <= skill ) ans++, j--, o = 1;
                if (!o) break;
        }
        cout << ans << endl;
}
