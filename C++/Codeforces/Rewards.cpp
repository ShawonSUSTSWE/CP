#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int z = 0, n = 0, m;
    string pat;
    cin >> m >> pat;
    for ( int i = 0; i < pat.length(); i++ )
    {
        if(pat[i] == 'z')
            z++;
        else if ( pat[i] == 'n' )
            n++;
    }
    while(n--)
    {
        cout << "1 ";
    }
    while(z--)
        cout << "0 ";
    cout << endl;
}
