#include<bits/stdc++.h>

using namespace std;

int main ()

{
    long long int coconut, x, man, div, i, j;
    while (1)
    {
        cin >> coconut;
        int backup = coconut, counter = 0, result = 0;
        if ( coconut < 0 )
            break;
        x = sqrt(coconut);
        for ( i = x+1; i >= 2; i-- )
        {
            if ( coconut % i == 1 )
            {
                for ( j = 0; coconut != 0; )
                {
                    if ( coconut % i == 0 )
                    {
                        coconut =  0;
                        break;
                    }
                    coconut--;
                    if ( coconut % i != 0 )
                        break;
                    div = coconut / i;
                    coconut -= div;
                    j++;
                }
                if ( i == j && coconut == 0)
                {
                    result = j;
                    coconut = backup;
                    break;
                }
                coconut = backup;
            }
        }
        if ( result != 0 )
            cout << coconut << " coconuts, "<< result << " people and 1 monkey" << endl;
        else
            cout << coconut << " coconuts, no solution\n";
    }
    return 0;
}
