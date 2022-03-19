#include<bits/stdc++.h>

using namespace std;

int num[26];

int main()

{
    int len, counter = 0;
    cin >> len;
    char word[len];
    scanf("%s", &word);
    if ( len <= 25 )
        cout << "NO\n";
    else
    {
        for ( int i = 0; i <= strlen(word); i++ )
        {
            if(isupper(word[i]) == true )
                tolower(word[i]);

            if ( num[word[i]-'a'] == 0 )
            {
                num[word[i]-'a']++;
                counter++;
            }
        }
        if ( counter >= 26 )
            cout << "YES\n";
    }
    return 0;
}
