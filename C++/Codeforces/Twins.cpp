#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num, value, my_money = 0, twin_money = 0, counter = 0;
    vector <int> coin;
    cin >> num;
    for ( int i = 0; i < num; i++ )
    {
        cin >> value;
        my_money += value;
        coin.push_back(value);
    }
    sort(coin.begin(), coin.end());
    for ( int i = 0; i < coin.size(); i++ )
    {
        my_money -= coin[coin.size()-1-i];
        twin_money += coin[coin.size()-1-i];
        counter++;
        if ( twin_money > my_money )
        {
            break;
        }
    }
    cout << counter << endl;
    return 0;
}
