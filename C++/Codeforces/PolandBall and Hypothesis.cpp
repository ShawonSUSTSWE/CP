#include<bits/stdc++.h>
using namespace std;

int main ()

{
    int calorie[5], ans = 0;
    for(int i = 1; i <= 4; i++)
    {
        cin >> calorie[i];
    }
    string shape;
    cin >> shape;
    for ( int i = 0; i < shape.length(); i++ )
        ans += calorie[(shape[i]-'0')];
    cout << ans << endl;
}

