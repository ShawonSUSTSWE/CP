#include<bits/stdc++.h>

using namespace std;

int main ()

{
    char problem[50], verd[50];
    int submission, nteam, team, n, Time;
    cin >> n >> nteam >> submission;
    int solvesheet[105][25]={};
    int last[25], solver[25];
    memset(last,-1,sizeof(last));
    while(submission--)
    {
        scanf("%d %d %s %s", &Time, &team, &problem, &verd);
        if ( verd[0] == 'Y' )
        {
            if ( solvesheet[team][problem[0]-'A'] == 0 )
            {
                solvesheet[team][problem[0]-'A'] = 1;
                last[problem[0]-'A'] = Time;
                solver[problem[0]-'A'] = team;
            }
        }

    }
    for ( int i = 0; i < n; i++ )
    {
        printf("%c ", i + 'A');
        if ( last[i] == -1 )
            puts("- -");
        else
            printf("%d %d\n", last[i], solver[i]);
    }
}
