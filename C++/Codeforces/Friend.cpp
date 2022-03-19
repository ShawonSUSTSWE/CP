#include<bits/stdc++.h>

using namespace std;

int main()

{
    int games, A = 0, D = 0;
    cin >> games;
    char round[games];
    for ( int i = 0; i < games; i++ )
    {
        cin >> round[i];
    }
    for ( int i = 0; i < games; i++ )
    {
        if ( round[i] == 'D' )
            D++;
        else
            A++;
    }
    if ( D > A )
        cout << "Danik\n";
    else if ( A > D )
        cout << "Anton\n";
    else
        cout << "Friendship\n";
    return 0;
}
