 #include<bits/stdc++.h>

using namespace std;

int prime[66001];
vector<int> primes;

void Sieve()
{
    prime[0] = 1;
    prime[1] = 1;
    prime[2] = 0;
    primes.push_back(2);
    for ( int i = 3; i <= sqrt(66000)+1; i += 2 )
    {
        if(!prime[i])
        {
            primes.push_back(i);
            for ( int j = i*i; j <= 66000; j += i*2 )
                prime[j] = 1;
        }
    }
    for ( int i = sqrt(66000)+1; i <= 66000; i += 2 )
    {
        if(!prime[i])
            primes.push_back(i);
    }
}

bool isPrime(unsigned  int pos)
{
    for ( unsigned int i = 0; primes[i]*primes[i] <= pos; ++i )
    {
        if ( pos % primes[i] == 0 )
            return false;
    }
    return true;
}


int main ()

{
    Sieve();
    unsigned int T, pos;
    scanf("%u", &T);
    while(T--)
    {
        scanf("%u", &pos);
        if( pos > 4294967291 ) {
			printf("4294967291\n");
			continue;
        }
        else if ( pos > 66000 )
        {
            if(pos%2==0)
                pos--;
            isPrime(pos);
            for ( ;; pos -= 2 )
            {
                if(isPrime(pos))
                {
                    printf("%u\n", pos);
                    break;
                }
            }
        }
        else
            printf("%u\n", primes[(lower_bound(primes.begin(),primes.end(),pos)-primes.begin())-1]);
    }
}
