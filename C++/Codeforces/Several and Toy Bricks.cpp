#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, m, k, nm;
    cin >> n >> m;
    string S[n+5], T[m+5];
    for ( int i = 1; i <= n; i++ )
        cin >> S[i%n];
    for ( int i = 1; i <= m; i++ )
        cin >> T[i%m];
    cin >> k;
    while(k--)
    {
        cin >> nm;
        cout << S[nm%n] <<T[nm%m] << endl;
    }
}
