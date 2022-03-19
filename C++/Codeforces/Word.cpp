#include<bits/stdc++.h>

using namespace std;

int main()

{
    char word[101];
    int cap = 0, small = 0;
    scanf("%s", &word);
    for ( int i = 0; i < strlen(word); i++ )
    {
        if ( islower(word[i]) == 0 )
        {
            cap++;
        }
        else
            small++;
    }
    if ( small >= cap )
    {
        for ( int i = 0; i < strlen(word); i++ )
        {
            if ( islower(word[i]) == 0 )
            {
                word[i] = tolower(word[i]);
            }
        }
    }
    else
    {
        for ( int i = 0; i < strlen(word); i++ )
        {
            if ( islower(word[i]) != 0 )
            {
                word[i] = toupper(word[i]);
            }
        }
    }
    printf("%s\n", word);
    return 0;
}
