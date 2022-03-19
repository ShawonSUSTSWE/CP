#include<bits/stdc++.h>

using namespace std;

int gsum[1000005];


int generator(int n)

{
    int sum = n;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}


int main ()

{
    for ( int i = 1; i <= 1000000; i++ )
        gsum[generator(i)] = 1;
    for ( int i = 1; i <= 1000000; i++ )
        if ( !gsum[i] ) printf("%d\n", i);
}
