#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << min(n*a, n/m*b+min(b,n%m*a) ) << endl;
    return 0;
}
