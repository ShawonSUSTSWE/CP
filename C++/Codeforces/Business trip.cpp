#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int k, a[12];
    cin >> k;
    int growth = 0;
    for ( int i = 0; i < 12; i++ )
        cin >> a[i];
    sort(a,a+12);
    int j = 11;
    while(k>growth && j >= 0)
    {
        growth += a[j];
        j--;
    }
    if ( growth < k )
        cout << "-1\n";
    else
        cout << 11-j << endl;
}
