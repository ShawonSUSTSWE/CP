#include<bits/stdc++.h>
#define ll unsigned long long

using namespace std;

int main ()

{
    ll n, m, maxsum, div;
    cin >> n >> m;
    ll minteam;
    maxsum = n-(m-1);
    maxsum *= (maxsum-1);
    maxsum /= 2;
    div = n%m;
    minteam = (((n/m)*(n/m-1))/2)*m;
    minteam += ((n%m)*(n/m));
    cout << minteam << " " << maxsum << endl;
}
