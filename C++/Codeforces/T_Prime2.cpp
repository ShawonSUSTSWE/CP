#include<bits/stdc++.h>

using namespace std;

long long int number[1000005];

int main()

{
    for ( int i = 2; i <= 1000000; i++ )
    {
        if ( number[i] == 0 )
        {
            for  ( int j = 2;  i * j <= 1000000; j++ )
            {
                number[i*j] = 1;
            }
        }
    }

    number[0] = 1, number[1] = 1;
    long long int num_of_num, num, square, t_prime = 0, is_prime = 1;
    cin >> num_of_num;
    for ( int i = 0; i < num_of_num; i++ )
    {
        t_prime = 0, is_prime = 1;
        cin >> num;
        square = sqrt(num);
        if ( square*square == num && number[square] != 1 )
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
