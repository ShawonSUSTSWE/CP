#include<bits/stdc++.h>

using namespace std;

int main()

{
    int flag = 0;
    string word;
    cin >> word;
    for ( int i = 0; i < word.length(); i++ )
    {
        if ( word[i] == 'H' || word[i] == 'Q' || word[i] == '9' )
        {
            flag = 1;
            break;
        }
    }
    if ( flag == 1 )
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
