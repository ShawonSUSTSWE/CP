#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int num_of_num, num, square, t_prime = 0, is_prime = 1;
    cin >> num_of_num;
    for ( int i = 0; i < num_of_num; i++ )
    {
        t_prime = 0, is_prime = 1;
        cin >> num;
        square = sqrt(num);
        if ( square * square == num )
        {
            for ( int j = 2; j <= (int)sqrt(square); j++ )
            {
                if ( square % j == 0 )
                {
                    is_prime = 0;
                    break;
                }
            }
            if ( is_prime == 1 && num != 1 && num != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
