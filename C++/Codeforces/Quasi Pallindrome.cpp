#include<bits/stdc++.h>

using namespace std;

int city[105];

int main()

{
    int n, m;
    long long int vote, maximum = 0, winner;
    cin >> n >> m;
    for ( int i = 1; i <= m; i++ )
    {
        for ( int j = 1; j <= n; j++ )
        {
            scanf("%lld", &vote);
            if (j == 1) {maximum = vote;winner = j;}
            else if ( vote > maximum )
            {
                maximum = vote;
                winner = j;
            }
        }
        city[winner]++;
    }
    maximum = 0;
    for ( int i = 1; i <= n; i++ )
    {
        if ( city[i] > maximum )
        {
            maximum = city[i];
            winner = i;
        }
    }
    cout << winner << endl;
}
