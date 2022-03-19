#include<bits/stdc++.h>

using namespace std;

vector<int> prime, divisor, power;
int num[1000002];

void sieve()
{
    num[1] = 1;
    prime.push_back(2);
    for ( int i = 4; i <= 1000000; i += 2)
        num[i] = 1;
    for ( int i = 3;  i <= 1000000; i += 2)
    {
        if (!num[i])
        {
            prime.push_back(i);
            if ( i <= sqrt(n)+2 )
            {
                for ( int j = i*i; j <= 1000000; j += i*2 )
                num[j] = 1;
            }
        }
    }
}

int main ()

{
    sieve();
    int n, cnt = 0, NOD = 1, SOD = 1, found, add = 0;
    cin >> n;
    for ( int i = 0; prime[i] <= n; i++ )
    {
        cnt = 0, found = 0;
        while(n%prime[i] == 0 && n != 0)
        {
            found = 1;
            cnt++;
            n /= prime[i];
        }
        if(found)
        {
            power.push_back(cnt);
            divisor.push_back(prime[i]);
        }
    }
    for ( int i = 0; i < power.size(); ++i )
        NOD *= (power[i]+1);
    cout << NOD << endl;
    for ( int i = 0; i < power.size(); i++ )
    {
        add = 0;
        for ( int j = 0; j <= power[i]; ++j )
        {
            add += pow(prime[i],j);
        }
        SOD *= add;
    }
    cout << SOD << endl;
}
