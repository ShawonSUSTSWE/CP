#include<bits/stdc++.h>

using namespace std;

int main()

{
    string handle;
    int n;
    bool good = false;
    cin >> n;
    int rating[n][2];
    for ( int i = 0; i < n; i++ )
    {
        cin >> handle >> rating[i][0] >> rating[i][1];
        if ( rating[i][0] >= 2400 && rating[i][1] > rating[i][0] )
        {
            good = true;
        }
    }
    if(good)
        cout << "YES\n";
    else
        cout << "NO\n";
}
