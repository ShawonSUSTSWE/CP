#include<bits/stdc++.h>

using namespace std;

int main ()

{
    long long int house, task, counter = 0, curr = 1;
    cin >> house >> task;
    long long int place[task];
    for ( int i = 0; i < task; i++ )
    {
        cin >> place[i];
    }
    for ( int i = 0; i < task; i++ )
    {
        if ( curr < place[i] )
            {
                counter += (place[i]-curr);
                curr = place[i];
            }
        else if ( curr > place[i] )
        {
            counter += (house-curr);
            curr = 0;
            counter += (place[i]-curr);
            curr = place[i];
        }
    }
    cout << counter << endl;
    return 0;
}
