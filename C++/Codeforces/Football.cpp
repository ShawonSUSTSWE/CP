#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int matrix[6][6], loci, locj;
    for ( int i = 1; i <= 5; i++ )
    {
        for ( int j = 1; j <= 5; j++ )
        {
            cin >> matrix[i][j];
            if ( matrix[i][j] == 1 )
            {
                loci = i;
                locj = j;
            }
        }
    }
    cout << abs((loci-3)+(locj-3))
    return 0;
}
