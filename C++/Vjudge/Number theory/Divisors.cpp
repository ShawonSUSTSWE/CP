#include<bits/stdc++.h>

using namespace std;

const int MAX = 1000000;
bool notPrime[1000001];
int divisor[MAX+5];
vector <int> ans;

void Sieve()

{
    int N = 1000000;
    int sq = sqrt(N);
    for ( int i = 4; i <= N; i += 2 ) notPrime[i] = true;
    for ( int i = 3; i <= sq; i += 2 )
    {
        if(!notPrime[i])
        {
            for ( int j = i*i; j <= N; j += i*2 ) notPrime[j] = true;

        }
    }
    notPrime[1] = true;
}

void div()

{
    for ( int i = 1; i <= MAX; i++ )
    {
        for ( int j = i; j <= MAX; j += i )
        {
            divisor[j]++;
        }
    }
}

int main()

{
    Sieve();
    div();
    for ( int i = 1; i <= MAX; i++ )
    {
        int n = divisor[i];
        for ( int j = 1; j*j <= n; j++ )
        {
            if ( n % j == 0 && notPrime[j] == false && notPrime[n/j] == 0 && n/j != j)
            {
                ans.push_back(i);
                break;
            }
        }
    }
    for ( int i = 8; i < ans.size(); i += 9 )
        cout << ans[i] << endl;
}
