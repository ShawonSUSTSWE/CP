#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int test_case, num_of_num;
    cin >> test_case;
    for ( long long int k = 0; k < test_case; k++ )
    {
        long long int sum = 0;
        cin >> num_of_num;
        for ( long long int i = 0; i < num_of_num; i++ )
        {
            sum += i;
        }
        if ( sum % 2 == 0 )
            cout << "Case " << k+1 << ": " << sum/2 << endl;
        else
            cout << "Case " << k+1 << ": " << sum << "/2" << endl;
    }
    return 0;
}
