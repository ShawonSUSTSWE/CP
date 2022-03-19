#include<bits/stdc++.h>
#define ll unsigned long long int


using namespace std;

int main ()

{
    ll l, r, sum = 0;
    cin >> l >> r;
    ll x = sqrt(l), y = sqrt(r);
    if(x*x != l) ++x; cout << (y-x)+1 << endl;
}
