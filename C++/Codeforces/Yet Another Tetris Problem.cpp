#include<bits/stdc++.h>

using namespace std;


int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ( abs(a-c) == abs(b-d) )
        cout << a << " " << d << " " << c << " " << b << endl;
    else if ( a == c )
        cout << (a+b-d) << " " << b << " " << (a+b-d) << " " << d << endl;
    else if ( b == d )
        cout << a << " " << (a+b-c) << " " << c << " " << (a+d-c) << endl;
    else
        cout << "-1\n";
}
