#include<bits/stdc++.h>

using namespace std;

int prime[66001];
vector<int> primes;

int isPrime(unsigned long long int n)
{
    int i, sqr;
    sqr = sqrt(n);

    for ( i = 0; primes[i] <= sqr; ++i )
    {
        if ( n % primes[i] == 0 )
            return 0;
    }
    return 1;
}


int main ()

{
    primes.push_back(2);
    for ( int i = 3; i <= 66000; i += 2 )
    {
        if(!prime[i])
        {
            primes.push_back(i);
            if ( i <= 259 )
            for ( int j = i*i; j <= 66000; j += i*2 )
                prime[j] = 1;
        }
    }
    int T;
    unsigned long long int n, i;
    cin >> T;
    while(T--)
    {
        scanf("%llu", &n);
        for ( i = n-1; i >= 2; i-- )
        {
            if(isPrime(i))
            {
                printf("%llu\n",i);
                break;
            }
        }
    }
}
