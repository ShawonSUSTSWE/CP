#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num, count1 = 1, count2 = 1;
    vector <string> magnet;
    string m;
    cin >> num;
    for ( int i = 0; i < num; i++ )
    {
        cin >> m;
        magnet.push_back(m);
    }
    for ( int i = 1; i < num; i++ )
    {
        if ( magnet[i-1][1] == magnet[i][0] )
        {
            count1 = 1;
            count2++;
        }
        count1++;
    }
    cout << count2 << endl;
}
