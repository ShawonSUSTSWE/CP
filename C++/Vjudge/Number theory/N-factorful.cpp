#include<bits/stdc++.h>
#define all(a) a.begin(),a.end()

using namespace std;

vector<int> prime, n_fact[12];
int num[1000002], divisor[1000002];

void sieve()
{
    num[1] = 1;
    prime.push_back(2);
    for ( int i = 4; i <= 1000000; i += 2)
    {
            num[i] = 1;
    }
    for ( int i = 3;  i <= 1000000; i += 2)
    {
        if (!num[i])
        {
            prime.push_back(i);
            for ( int j = i; j <= 1000000; j += i )
            {
                if ( j != i)
                    num[j] = 1;
            }
        }
    }

}

int main ()

{
    sieve();
    int T, l, r, n, cnt;
    for ( int i = 0; i < prime.size(); ++i )
    {
        for ( int j = prime[i]; j <= 1000000; j += prime[i] )
            divisor[j]++;
    }
    for ( int i = 1; i <= 1000000; i++ )
    {
        n_fact[divisor[i]].push_back(i);
    }
    cin >> T;
    while(T--)
    {
        scanf("%d %d %d", &l, &r, &n);
        int x = upper_bound(all(n_fact[n]),r)-n_fact[n].begin();
        int y = lower_bound(all(n_fact[n]),l)-n_fact[n].begin();
        cnt = x-y;
        printf("%d\n", cnt);
    }
}
