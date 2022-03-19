#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, c;
    cin >> T;
    for ( int k= 0; k < T; k++ )
    {
        cin >> n;
        vector <int> date;
        vector <int> credit;
        for ( int i = 0; i < n; i++ )
        {
            cin >> c;
            date.push_back(c);
        }
        for ( int i = 0; i < n; i++ )
        {
            cin >> c;
            credit.push_back(c);
        }
        int i = max_element(date.begin(), date.end());

    }
}
