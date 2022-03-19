#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()

{
    int n, i, j, red, yellow, blue, indigo, violet, green, orange;
    cin >> n;
    vector <string> gangs;
    char gang[100];
    for ( i = 0; i < n; i++ )
    {
        cin >> gang;
        gangs.push_back(gang);
    }
    for ( i =0 ; i < n; i++ )
    {
        red = 0, yellow = 0, blue = 0, indigo = 0, violet = 0, green = 0, orange = 0;
        gang = gangs[i];
        for ( j = 0; j < strlen(gangs); j++ )
        {
            if ( gangs[i][j] == 'r' || gangs[i][j] == 'e' || gangs[i][j] == 'd' )
            {
                red++;
            }
            if ( gangs[i][j] == 'y' || gangs[i][j] == 'e' || gangs[i][j] == 'l' || gangs[i][j] == 'o' || gangs[i][j] == 'w')
                {

                }
        }
    }
}
