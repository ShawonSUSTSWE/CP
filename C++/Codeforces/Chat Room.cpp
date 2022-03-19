#include<bits/stdc++.h>
#include<locale>

using namespace std;

int main()

{
    string word, word2;
    int counter = 0, j = 0;
    cin >> word;
    for ( int i = 0; i < word.length(); i++ )
    {
        if ( isupper(word[i]) != 0 )
        {
            counter++;
        }
    }
    if ( islower(word[0]) != 0 )
        j = 1;
    for ( int i = 0; i < word.length(); i++ )
    {
        if ( counter == word.length() )
        {
            word[i] = tolower(word[i]);
            continue;
        }
        else if ( counter == word.length()-1 && j == 1)
        {
            if ( i == 0 )
                word[i] = toupper(word[i]);
            else
                word[i] = tolower(word[i]);
            continue;
        }
        else
           break;
    }
        cout << word << endl;
    return 0;
}
