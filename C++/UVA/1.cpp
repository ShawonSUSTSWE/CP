#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_of_num, divisor, counter = 0;
    cin >> num_of_num;
    int num[num_of_num];
    cin >> divisor;
    for ( int i = 0; i < num_of_num; i++ )
    {
        cin >> num[i];
    }
    for ( int i = 0; i < num_of_num; i++ )
    {
        for ( int j = 0; j < num_of_num; j++ )
        {
            if ( i == j )
                continue;
            else
            {
                if ( (num[i] + num[j]) % divisor == 0 )
                    counter++;
            }
        }
    }
    cout << counter/2 << endl;
    return 0;
}
