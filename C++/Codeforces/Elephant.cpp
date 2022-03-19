#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int location, steps = 0;
    cin >> location;
    while ( location > 0 )
    {
        steps++;
        location -= 5;
    }
    cout << steps << endl;
    return 0;
}
