#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int friends, wall, width = 0;
    cin >> friends >> wall;
    int height[friends];
    for ( int i = 0; i < friends; i++ )
    {
        cin >> height[i];
        if ( height[i] <= wall )
            width++;
        else
            width += 2;
    }
    cout << width << endl;
    return 0;
}
