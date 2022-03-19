#include<bits/stdc++.h>

using namespace std;

int main()

{
    string word;
    cin >> word;
    printf("%d", 'a');
    for ( int i = 0; i < word.length(); i++ )
    {
        if ( word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' )
        {
            continue;
        }
        else
        {
            cout << ".";
            if ( word[i] > 97 )
            {
                cout << word[i];
            }
            else
                {
                    word[i] = word[i] + 32;
                    cout << word[i];
                }
        }
    }
    cout << endl;
    return 0;
}
