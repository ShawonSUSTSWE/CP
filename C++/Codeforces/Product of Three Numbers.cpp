#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T;
    bool pos = true;
    string a, b, c;
    cin >> T;
    while(T--)
    {
        pos = true;
        cin >> a >> b >> c;
        for ( int i = 0; i < c.length(); i++ )
        {
            if ( c[i] == b[i] ) swap(c[i],a[i]);
            else if ( c[i] == a[i] ) swap(c[i],b[i]);
            else { pos = false; break;}
        }
        if (pos) cout << "YES\n";
        else cout << "NO\n";
    }
}
