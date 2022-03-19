#include<bits/stdc++.h>

using namespace std;

long long int sweet[200003], day[200003];

int main ()

{
    long long int n, m;
    cin >> n >> m;
    for ( long long int i = 0; i < n; i++ )
    {
        scanf("%lld" , &sweet[i]);
    }
    sort(sweet, sweet+n);
    for ( long long int i = 1; i < n; i++ )
    {
        sweet[i] += sweet[i-1];
    }
    for ( long long int i = 0; i < m; i++ )
    {
        day[i] = sweet[i];
        for ( long long int j = i+m; j < n; j += m)
        {
            day[j] = day[j-m]+sweet[j];
        }
    }
    for ( int i = 0; i < n; i++ )
        printf("%lld ", day[i]);
    cout << endl;

}
