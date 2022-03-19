#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string word;
    cin >> word;
    char current = 'a';
    int sum = 0;
    for ( int i = 0; i < word.length(); i++ )
    {
        if (max(current,word[i])-min(current,word[i])>13)
        {
            sum += (26-(max(current,word[i])-min(current,word[i])));
        }
        else
        {
            sum += (max(current,word[i])-min(current,word[i]));
        }
        current = word[i];
    }
    cout << sum << endl;
}
