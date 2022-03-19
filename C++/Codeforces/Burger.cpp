#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ( )

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m, money = 0;
    cin >> n >> m;
    int TV[n+1];
    for ( int i = 1; i <= n; i++ )
    {
        cin >> TV[i];
    }
    sort(TV+1,TV+n+1);
    for ( int i = 1; i <= m; i++ )
    {
        if(TV[i] < 0)money -= TV[i];
    }
    cout << money << endl;
}
