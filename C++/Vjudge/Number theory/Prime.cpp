#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int i = 2;
    bool prime;
    for ( i = 2; i < 1000; i++ )
    {
        int j;
        prime = true;
        for ( j = 2; j <= sqrt(i); j++ )
        {
            if ( i % j == 0 )
            {
                prime = false;
                break;
            }
        }
        if(prime)
        {
            printf("%d\n", i);
        }
    }
}
