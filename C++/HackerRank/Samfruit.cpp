#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int h_start, h_end, a_tree, fruit, o_tree, a_house = 0, o_house = 0, num_of_apples, num_of_oranges;
    vector <int> apple;
    vector <int> orange;
    cin >> h_start >> h_end >> a_tree >> o_tree >> num_of_apples >> num_of_oranges;
    for ( int i = 0; i < num_of_apples; i++ )
    {
        cin >> fruit;
        apple.push_back(fruit);
    }
    for ( int i = 0; i < num_of_oranges; i++ )
    {
        cin >> fruit;
        orange.push_back(fruit);
    }
    for ( int i = 0; i < num_of_apples; i++ )
    {
        if ( (apple[i] + a_tree) >= h_start && (apple[i] + a_tree) <= h_end )
        {
            a_house++;
        }
    }
    for ( int i = 0; i < num_of_oranges; i++ )
    {
        if ( (orange[i] + o_tree) >= h_start && (orange[i] + o_tree) <= h_end )
        {
            o_house++;
        }
    }
    cout << a_house << endl << o_house << endl;
    return 0;
}
