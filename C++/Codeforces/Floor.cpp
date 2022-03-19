#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    ll n, h, a, b, k, dis = 0, ta, fa, tb, fb, path = 0;
    cin >> n >> h >> a >> b >> k;
    while(k--)
    {
        path = 0;
        dis = 0;
        cin >> ta >> fa >> tb >> fb;
        dis += abs((ta-tb));
        if ( ta == tb )
        {
            dis += abs(fa-fb);
            cout << dis << endl;
            continue;
        }
        if ( fa < a )
        {
            dis += abs(fa-a);
            path = 1;
        }
        else if ( fa > b )
        {
            dis += abs(fa-b);
            path = 2;
        }
        if ( path == 1 )
        {
            dis += abs(a-fb);
        }
        else if ( path == 2 )
        {
            dis += abs(b-fb);
        }
        else
        {
            dis += abs(fb-fa);
        }
        cout << dis << endl;
    }
}
