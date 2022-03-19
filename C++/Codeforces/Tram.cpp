#include<bits/stdc++.h>

using namespace std;

int main()

{
    int stop;
    cin >> stop;
    int enter[stop], exit[stop], people[stop];
    for ( int i = 0 ; i < stop; i++ )
    {
        cin >> exit[i] >> enter[i];
        if ( i == 0 )
        people[i] = 0 + enter[i];
        else
        people[i] = people[i-1]-exit[i]+enter[i];
    }
    sort(people, people+stop);
    cout << people[stop-1] << endl;
    return 0;
}
