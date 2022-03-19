#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    pair <int,int> player[n];
    for ( int i = 0; i < n; i++ )
    {
        cin >> player[i].first;
        player[i].second = i+1;
    }
    sort(player,player+n);
    cout << n/2+(n%2) << endl;
    for ( int i = 0; i < n; i += 2 )
        cout << player[i].second << " ";
    cout << endl << n/2 << endl;
    for ( int i = 1; i < n; i += 2 )
        cout << player[i].second << " ";
    cout << endl;
}
