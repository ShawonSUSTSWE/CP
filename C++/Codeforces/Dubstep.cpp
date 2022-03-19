#include<bits/stdc++.h>

using namespace std;

int main ()

{
    char line[300], ans[300];
    scanf("%s", &line);
    int j = 0;
    for ( int i = 0; i < strlen(line); i++ )
    {
        if ( i == strlen(line)-3 )
        {
            if ( line[i] == 'W' && line[i+1] == 'U' && line[i+2] == 'B')
            {
                break;
            }
        }
        if ( line[i] == 'W' && line[i+1] == 'U' && line[i+2] == 'B' )
        {
            i += 2;
            ans[j] = ' ';
            j++;
        }
        else
        {
            ans[j] = line[i];
            j++;
        }
    }
    for ( int i = 0; i < j; i++ )
        cout << ans[i];
    cout << endl;
    return 0;
}
