#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()

{
    ll num;
    cin >> num;
    if ( (num-9) % 2 == 0 )
    {
        cout << num-9 << " 9\n";
        return 0;
    }
    else
    {
        cout << num-8 << " 8\n";
        return 0;
    }
}
