#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, x, y, tree[100005], cnt = 0;
    cin >> n;
    for ( int i = 1; i < n; i++ )
    {
        cin >> x >> y;
        tree[x]++, tree[y]++;
    }
    for ( int i = 1; i <= n; i++ )
        cnt += tree[i]*(tree[i]-1)/2;
    cout << cnt << endl;
}
