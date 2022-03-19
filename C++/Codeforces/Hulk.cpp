#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num, soldier[102], minimum, maximum = 0;
    cin >> num;
    for ( int i = 1; i <= num; i++ )
    {
        cin >> soldier[i];
        if ( i == 1 )
            minimum = soldier[i];
        if ( minimum > soldier[i] )
            minimum = soldier[i];
        else if ( maximum < soldier[i] )
            maximum = soldier[i];
    }
    int minp, maxp, steps;
    for ( int i = 1, j = num; i <= num, j >= 1; i++, j-- )
    {
        if ( soldier[i] == minimum )
        {
            minp = i;
        }
        if ( soldier[j] == maximum )
        {
            maxp = j;
        }
    }
    if ( minp < maxp )
    {
        steps = ((maxp-1) + (num-minp))-1;
    }
    else
        steps = (maxp-1) + (num-minp);
    cout << steps << endl;
    return 0;
}
