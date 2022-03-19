#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int a, b, c;
    cin >> a >> b >> c;
    if ( c == min (min(a,b),c) || ( c <= a+1 && b != min (min(a,b),c) ) )
        cout << c+(c-1)+(c-2) << endl;
    else if ( b == min (min(a,b),c) )
        cout << b+(b-1)+(b+1) << endl;
    else
        cout << a+(a+1)+(a+2) << endl;
}
