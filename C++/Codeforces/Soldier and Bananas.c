#include<bits/stdc++.h>

using namespace std;

int main()

{
    int banana, money, price, debt, cost = 0;
    cin >> price >> money >> banana;
    for ( int i = 1; i <= banana; i++ )
    {
        cost += i*price;
    }
    debt = cost-money;
    if ( debt <= 0 )
    {
        cout << "0\n";
    }
    else
        cout << debt << endl;
    return 0;
}
