#include<bits/stdc++.h>

using namespace std;

int main ()

{
    while(1)
    {
        int num_of_num, t_cost, j = 0, sum = 0;
        cin >> num_of_num;
        if ( num_of_num == 0 )
            break;
        int num[num_of_num], cost[num_of_num];
        for ( int i = 0; i < num_of_num; i++)
        {
            cin >> num[i];
        }
        sort(num, num+num_of_num);
        for ( int i = 1; i < num_of_num; i++ )
        {
            if ( i == 1 )
            {
                cost[j] = num[i]+num[i-1];
                j++;
            }
            else
            {
                cost[j] = cost[j-1] + num[i];
                j++;
            }
        }
        for ( int k = 0; k < j; k++ )
        {
            sum += cost[k];
        }
        cout << sum << endl;
    }
}
