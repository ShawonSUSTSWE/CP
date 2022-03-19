#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int days, m, counter = 1;
    vector < long long int > money, profit;
    cin >> days;
    for ( int i = 0; i < days; i++ )
    {
        cin >> m;
        money.push_back(m);
    }
    for ( int i = 1; i < money.size(); i++ )
    {
        if ( money[i] >= money[i-1] )
            counter++;
        else
        {
            profit.push_back(counter);
            counter = 1;
        }
    }
    profit.push_back(counter);
    sort(profit.begin(), profit.end());
    cout << profit[profit.size()-1] << endl;
    return 0;
}
