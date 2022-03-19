#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_stone, counter = 0;
    string stone;
    cin >> num_stone;
    cin >> stone;
    for ( int i = 0; i < stone.size(); i++ )
    {
        if ( i != 0 && stone[i] == stone[i-1] )
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
