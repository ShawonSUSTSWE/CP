#include<bits/stdc++.h>

using namespace std;

int main()

{
    int problems, i = 0, time = 0, dist;
    cin >> problems >> dist;
    time += dist;
    if ( time > 235 && time <= 240 )
    {
        cout << "0\n";
        return 0;
    }
    for ( i = 1; i <= problems; i++ )
    {
        time += i*5;
        if ( i == problems )
            break;
        if ( time+((i+1)*5) > 240 )
            break;
    }
    cout << i << endl;
}
