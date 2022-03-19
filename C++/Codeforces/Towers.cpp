#include<bits/stdc++.h>

using namespace std;

int num[1001];

int main ()

{
    int num_of_tower, height;
    cin >> num_of_tower;
    for ( int i = 0; i < num_of_tower; i++ )
    {
        cin >> height;
        num[height]++;
    }
    cout << *max_element(num, num+1001) << " ";
    num_of_tower = 0;
    for ( int i = 1; i <= 1000; i++ )
    {
        if ( num[i] > 0 )
            num_of_tower++;
    }
    cout << num_of_tower << endl;
}
