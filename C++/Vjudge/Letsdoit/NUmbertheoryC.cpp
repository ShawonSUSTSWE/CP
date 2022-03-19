#include<bits/stdc++.h>

using namespace std;

bool prime[100000001];

int main ()

{
    int num, j = 2;
    for ( long long int i = 2; i <= 10000000; )
    {
        j = 2;
        if ( prime[i] == 0 )
        {
            while ( j*i <= 100000000 )
            {
                prime[j*i] = 1;
                j++;
            }
        }
        if ( i % 2 == 0 )
            i++;
        else
            i += 2;
    }
}
