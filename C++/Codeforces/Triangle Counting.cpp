#include<bits/stdc++.h>

using namespace std;

int main ()

{
    long long int length;
    while(1)
    {
        long long int counter = 0, c1 = 0, c2 = 1;
        cin >> length;
        if ( length < 3 )
            break;
        for ( long long int i = 3, j = 0; i <= length; i++ )
        {
            counter += j;
            if ( c1 == 2 )
            {
                c2++;
                j += c2;
                c1 = 0;
            }
            else
                j += c2;
            c1++;
        }
        cout << counter << endl;
    }
    return 0;
}
