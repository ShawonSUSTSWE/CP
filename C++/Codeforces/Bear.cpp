#include<bits/stdc++.h>

using namespace std;

int main()

{
    int limak, bob, i = 0;
    cin >> limak >> bob;
    while ( limak <= bob )
    {
        limak *= 3;
        bob *= 2;
        i++;
    }
    cout << i << endl;
    return 0;
}
