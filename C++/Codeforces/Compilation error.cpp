#include<bits/stdc++.h>

using namespace std;

int main ()

{
    long long int num, error, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> num;
    for ( int j = 0; j < 3; j++)
    {
        for ( long long int i = 0; i < num; i++ )
        {
            cin >> error;
            if ( j == 0 )
                sum1 += error;
            else if ( j == 1 )
                sum2 += error;
            else
                sum3 += error;
        }
        num--;
    }
    cout << sum1-sum2 << endl << sum2-sum3 << endl;
    return 0;
}
