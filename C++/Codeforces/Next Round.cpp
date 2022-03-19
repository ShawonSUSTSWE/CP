#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_conts, pos, point, counter = 0;
    vector <int> conts;
    cin >> num_conts >> pos;
    for ( int i = 0; i < num_conts; i++ )
    {
        cin >> point;
        conts.push_back(point);
    }
    for ( int i = 0; i < conts.size(); i++ )
    {
            if ( conts[i] >= conts[pos-1] && conts[i] > 0 )
            {
                counter++;
            }
    }
    cout << counter << endl;
    return 0;
}
