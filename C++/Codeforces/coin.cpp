#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, coin;
    cin >> T;
    while(T--)
    {
        cin >> n;
        vector <int> value;
        for ( int i = 0; i < n; i++ )
        {
            cin >> coin;
            value.push_back(coin);
        }
        int sum = 1;
        int coins = 1;
        if ( value.size() > 1 )
            coins++;
        for ( int i = 1; i < value.size()-1; i++ )
        {
            if ( sum + value[i] < value[i+1])
            {
                sum += value[i];
                coins++;
            }
        }
        cout << coins << endl;
    }
}
