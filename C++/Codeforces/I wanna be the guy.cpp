#include<bits/stdc++.h>

using namespace std;

int Game[101];

int main()

{
    int levels, p, flag = 1;
    cin >> levels >> p;
    int X[p], Y[p];
    for ( int i = 0; i < p; i++ )
    {
        cin >> X[i];
        Game[X[i]] = 1;
    }
    cin >> p;
    for ( int i = 0; i < p; i++ )
    {
        cin >> Y[i];
        Game[Y[i]] = 1;
    }
    for ( int i = 1; i <= levels; i++ )
    {
        if ( Game[i] == 0 )
        {
            flag = 0;
            break;
        }
    }
    if ( flag == 1 )
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";
    return 0;
}
