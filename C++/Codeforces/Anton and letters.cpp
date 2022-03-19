#include<bits/stdc++.h>

using namespace std;

int alpha[26];

int main ()

{
    char sets[1005];
    int counter = 0;
    gets(sets);
    for ( int i = 0; i < strlen(sets); i++ )
    {
        if ( sets[i] == '{' || sets[i] == ' ' || sets[i] == ',' )
            continue;
        else if ( sets[i] == '}')
            break;
        else
        {

            if ( alpha[sets[i] -'a'] == 0 )
            {
                alpha[sets[i] - 'a']++;
                counter++;
            }
            else
                continue;
        }

    }
    cout << counter << endl;
    return 0;
}
