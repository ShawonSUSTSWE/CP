#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main ()

{
    int num, num_of_num, sum = 0;
    vector <int> number;
    cin >> num_of_num;
    for ( int i = 0; i < num_of_num; i++ )
    {
        cin >> num;
        number.push_back(num);
        sum += num;
    }
    cout << sum << "\n";
}
