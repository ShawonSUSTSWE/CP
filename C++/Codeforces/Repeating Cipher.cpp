#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, cnt = 0;
    string word;
    cin >> n >> word;
    for ( int i = 0; i < word.length()-3; i++ )
    {
        if ( word[i] == 'x' && word[i+1] == 'x' && word[i+2] == 'x')
            cnt++;
    }
    cout << cnt << endl;
}
