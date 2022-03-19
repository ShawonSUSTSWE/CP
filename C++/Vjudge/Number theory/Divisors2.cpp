#include<bits/stdc++.h>

using namespace std;

int const n = 1000001;
int divisors[n];
bool sol[n];
vector <int> num;

int main ()

{
    for ( int i = 1; i < n; ++i )
        for ( int j = i; j < n; j += i )
            divisors[j]++;

    memset(sol,true,sizeof(sol));
    for ( int i = 1; i < n; ++i )
        for ( int j = i; j < n; j += i )
            if ( divisors[j] < 3 || divisors[j] % divisors[i] != 0 )
                sol[j] = false;
    for ( int i = 1; i < n; ++i )
        if(sol[i])
            num.push_back(i);
    for ( int i = 107; i < num.size(); i += 108 )
        printf("%d\n",num[i]);
}
