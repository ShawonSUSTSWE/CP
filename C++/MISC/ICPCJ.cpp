#include<bits/stdc++.h>
#define ULL unsigned long long int

using namespace std;

int main ()

{
    ULL T, ndiv, num;
    cin >> T;
    for ( ULL k = 1; k <= T; k++ )
    {
        cin >> ndiv;
        ULL div[ndiv];
        for ( ULL i = 0; i < ndiv; i++ )
        {
            cin >> div[i];
        }
        if ( ndiv == 1 )
        {
             num = div[0]*div[0];
        }
        else
        {
            sort(div, div+ndiv);
            num = div[0]*div[ndiv-1];
        }
        cout << "Case " << k << ": " << num << endl;
    }
    return 0;
}
