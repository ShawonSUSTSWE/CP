#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, k, cnt = 1;
    vector <int> s;
    cin >> n >> k;
    for ( int i = 2; i <= n; i++ )
    {
        cin >> k;
        if ( k != 1 )
            cnt++;
        else
        {
            s.push_back(cnt);
            cnt = 1;
        }
    }
    s.push_back(cnt);
    cout << s.size() << endl;
    for ( int i = 0; i < s.size(); i++ )
        cout << s[i] << " ";
    cout << endl;
}
