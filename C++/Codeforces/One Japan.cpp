#include<bits/stdc++.h>

using namespace std;

vector <int> encrypt;

int main()

{
    int n;
    cin >> n;
    char square[n];
    scanf("%s", &square);
    int cnt = 0;
    for ( int i = 0; i < strlen(square); i++ )
    {
        if(square[i] == 'B')
        {
            cnt++;
        }
        else if ( square[i] == 'W' && cnt )
        {
            encrypt.push_back(cnt);
            cnt = 0;
        }
        if ( i == strlen(square)-1 && cnt )
            encrypt.push_back(cnt);
    }
    cout << encrypt.size() << endl;
    for ( int i = 0; i < encrypt.size(); i++ )
    {
        cout << encrypt[i] << " ";
    }
    cout << endl;
}
