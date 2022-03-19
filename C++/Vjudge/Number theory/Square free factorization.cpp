#include<bits/stdc++.h>

using namespace std;

bool isPrime[1000001];
vector <int> prime;

void Sieve()

{
    memset(isPrime, true, sizeof(isPrime));
    isPrime[1] = false;
    for ( int i = 4; i < 10000; i += 2 )
        isPrime[i] = false;
    prime.push_back(2);
    for ( int i = 3; i < 10000; i += 2 )
    {
        if(isPrime[i])
        {
            prime.push_back(i);
            if ( i < sqrt(10000)+2 )
            {
                for ( int j = i * i; j < 10000; j += i*2 )
                    isPrime[j] = false;
            }
        }
    }
}

int main()

{
    Sieve();
    int T, num;
    cin >> T;
    while(T--)
    {
        scanf("%d", &num);
        int counter, mini = 0, i = 0;
        int root = (int)sqrt(num);
        while( root >= prime[i] )
        {
            if( num % prime[i] == 0)
            {
                counter = 0;
                while ( num % prime[i] == 0 )
                {
                    counter++;
                    num /= prime[i];
                }
                if ( counter > mini )
                    mini = counter;
                root = (int)sqrt(num);
            }
            i++;
        }
        if ( mini < 1 && num > 1 )
            mini = 1;
        printf("%d\n", mini);
    }
}
