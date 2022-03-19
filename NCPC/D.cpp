#include<bits/stdc++.h>

bool flag[26];
using namespace std;

int main()

{
    int i, j, num;
    string word;
    cin >> num;
    cin >> word;
    for ( i = 0; i < word.length(); i++ )
    {
        if ( word[i] == '?' && word[word.length()-1-i] != '?' )
            word[i] = word[word.length()-1-i];
        if ( word[i] != '?' )
            flag[word[i]-'a'] = true;
        if ( word[word.length()-1-i] != '?' && word[word.length()-1-i] != word[i] )
        {
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }
    for ( j = num-1; j >= 0 && flag[j]; j--);
    for ( i = (word.length()-1)/2; i >= 0; i-- )
    {
        if(word[i] == '?')
        {
            if ( j < 0 )
                j = 0;
            word[i] = word[word.length()-1-i] = j + 'a', flag[j] = true;
            while ( j >= 0 && flag[j] )
                j--;
        }
    }
    if ( j < 0 )
        cout << word << endl;
    else
        cout << "IMPOSSIBLE\n" << endl;
    return 0;
}
