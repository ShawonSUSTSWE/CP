#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_of_cards;
    while(1)
    {
        cin >> num_of_cards;
        if ( num_of_cards == 0 )
            break;
        for ( int i = 0; ; i++ )
        {
            if ( num_of_cards == pow(2,i) )
            {
                cout << pow(2,i) << endl;
                break;
            }
            else if ( pow(2,i) > num_of_cards )
            {
                cout << 2*(num_of_cards-pow(2,i-1)) << endl;
                break;
            }
        }
    }
    return 0;
}
