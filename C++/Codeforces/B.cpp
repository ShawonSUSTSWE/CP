#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int n;
    string word;
    cin >> n >> word;
    for ( int i = 'z'; i > 'a'; i-- )
    {
        for ( int j = 0; j < word.size(); j++ )
        {
            if ( word[j] == i && (word[j-1] == i-1 || word[j+1] == i-1))
            {
                word.erase(j,1);
                j = -1;
            }
        }
    }
    cout << n-word.size() << endl;
}
