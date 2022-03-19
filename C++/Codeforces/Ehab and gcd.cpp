#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int n = 0, m;
    for ( int i = 1; i <= 5; i++ ) cin >> m, n+= m;
    (n%5 || n == 0)? cout << -1 << endl:cout << n/5 << endl;
}
