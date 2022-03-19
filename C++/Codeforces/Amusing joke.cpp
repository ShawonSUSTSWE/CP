#include<bits/stdc++.h>

using namespace std;

int letter1[26], letter2[26];

int main()

{
     char word1[105], word2[105], pile[105];
     int flag = 1;
     scanf("%s %s %s", word1, word2, pile);
     if ( strlen(word1) + strlen(word2) < strlen(pile) || strlen(word1) + strlen(word2) > strlen(pile) )
     {
         cout << "NO\n";
         return 0;
     }
     else
     {
        for ( int i = 0; i < strlen(word1); i++ )
        {
            letter1[word1[i]-'A']++;
        }
        for ( int i = 0; i < strlen(word2); i++ )
        {
            letter1[word2[i]-'A']++;
        }
        for ( int i = 0; i < strlen(pile); i++ )
        {
            letter2[pile[i]-'A']++;
        }
        for ( int i = 0; i < 26; i++ )
        {
            if ( letter1[i] != letter2[i] )
            {
                flag = 0;
                break;
            }
        }
        if ( flag == 1 )
            cout << "YES\n";
        else
            cout << "NO\n";
     }
}
