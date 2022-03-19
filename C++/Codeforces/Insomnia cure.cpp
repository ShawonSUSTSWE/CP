#include<bits/stdc++.h>

using namespace std;

int number[100001];

int main()

{
    int div[4], range, counter = 0;
    for  ( int i = 0; i < 4; i++ )
    {
        cin >> div[i];
    }
    cin >> range;
    for ( int i = 1; i <= range; i++ )
    {
        if ( i % div[0] == 0 )
        {
            number[i] = 1;
            continue;
        }
        if ( i % div[1] == 0 )
        {
            number[i] = 1;
            continue;
        }
        if ( i % div[2] == 0 )
        {
            number[i] = 1;
            continue;
        }
        if ( i % div[3] == 0 )
        {
            number[i] = 1;
            continue;
        }
    }
    for ( int i = 1; i <= range; i++ )
    {
        if ( number[i] == 1 )
        {
            counter++;
        }
    }
        cout << counter << endl;
        return 0;
}
