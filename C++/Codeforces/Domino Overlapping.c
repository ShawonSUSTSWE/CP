#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int board, x, y;
    cin >> x >> y;
    if ( x == 1 )
    {
        cout << "0\n";
    }
    else
    {
        cout << x*y/2;
    }
    return 0;


}
