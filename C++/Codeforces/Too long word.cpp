#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int words;
    string word;
    cin >> words;
    for ( int i = 0; i < words; i++ )
    {
        cin >> word;
        if ( word.length() > 10 )
        {
            cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
        }
        else
            cout << word << endl;
    }
    return 0;
}
