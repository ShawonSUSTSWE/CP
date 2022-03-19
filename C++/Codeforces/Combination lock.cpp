#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int num, query, money, cnt = 0;
    vector <long long int> drink;
    cin >> num;
    for ( long long int i = 0; i < num; i++ )
    {
        cin >> drink[i];
    }
    cin >> query;
    sort(drink.begin(), drink.end());
    while(query--)
    {
        cnt = 0;
        cin >> money;
        if ( money < drink[0] )
            cout << '0\n';
        else if ( money >= drink[num-1] )
            cout << num << endl;
        else
        {
            if ( money <= drink[num/2+1] )
            {
                for ( long long int i = 0; i <= num/2+1; i++ )
                {
                    if ( money >= drink[i] )
                        cnt++;
                    else
                        break;
                }
            }
            else
            {
                cnt += num/2+1;
                for ( long long int i = num/2+2; i < num; i++ )
                {
                    if ( money >= drink[i] )
                        cnt++;
                    else
                        break;
                }
            }
        }


    }
}
