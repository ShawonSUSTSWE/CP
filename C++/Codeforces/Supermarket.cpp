#include<bits/stdc++.h>
#define ll long long

using namespace std;

int coffee[200005], allowed[200005];

int main ()

{
    int n, k, q, small = INT_MAX, l, r;
    cin >> n >> k >> q;
    while(n--)
    {
        cin >> l >> r;
        coffee[l]++;
        coffee[r+1]--;
        small = min(l,small);
    }
    for ( int i = small; i <= 200000; i++ )
    {
        coffee[i] += coffee[i-1];
        if ( coffee[i] >= k )
            allowed[i]++;
        allowed[i] += allowed[i-1];
    }
    while(q--)
    {
        cin >> l >> r;
        int drink = allowed[r]-allowed[l-1];
        cout << drink << endl;
    }
}
