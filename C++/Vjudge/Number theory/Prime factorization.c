#include<bits/stdc++.h>

using namespace std;

vector<int> prime, divisor, power;
int num[1000002];

void sieve(int n)
{
    num[1] = 1;
    prime.push_back(2);
    for ( int i = 4; i <= n; i += 2)
        num[i] = 1;
    for ( int i = 3;  i <= n; i += 2)
    {
        if (!num[i])
        {
            prime.push_back(i);
            if ( i <= sqrt(n)+2 )
            {
                for ( int j = i*i; j <= n; j += i*2 )
                num[j] = 1;
            }
        }
    }
}

int main ()

{
    int num, cnt = 0, NOD = 1, SOD = 0;
    cin >> num;
    for ( int i = 0; prime[i] <= num; i++ )
    {
        cnt = 0, found = 0;
        while(num%prime[i] == 0)
        {
            found = 1;
            cnt++;
            num /= prime[i];
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
        SOD += pow(divisor[i],power[i]);
    }
}
