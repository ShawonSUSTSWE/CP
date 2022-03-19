#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int u_counter = 0;
    char handle[101], pos[101];
    cin >> handle;
    for ( int i = 0; i < 101; i++ )
    {
        pos[i] = '0';
    }
    for ( int i = 0; i < strlen(handle)-1; i++ )
    {
        for ( int j = i + 1; j < strlen(handle); j++ )
        {
            if ( handle[i] != pos[j] && handle[i] == handle[j] )
            {
                u_counter++;
                pos[j] = handle[i];
            }
        }
    }
    if( (strlen(handle)-u_counter) % 2 != 0 )
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}
