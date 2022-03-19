#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num, frnd[101], gift[101];
    cin >> num;
    for ( int i = 1; i <= num; i++ )
    {
        cin >> frnd[i];
    }
    for ( int i = 1; i <= num; i++ )
    {
        for ( int j = 1; j <= num; j++ )
        {
            if ( frnd[j] == i )
            {
                gift[i] = j;
            }
        }
    }
    for ( int i = 1; i <= num; i++ )
    {
        if ( i != num )
            cout << gift[i] << " ";
        else
            cout << gift[i] << endl;
    }
    return 0;
}
