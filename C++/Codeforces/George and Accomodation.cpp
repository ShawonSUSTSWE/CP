#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_of_room, counter = 0, p, s;
    cin >> num_of_room;
    for ( int i = 0; i < num_of_room; i++ )
    {
        cin >> p >> s;
        if ( s-p >= 2 )
        {
            counter++;
        }
    }
    cout << counter << endl;
}
