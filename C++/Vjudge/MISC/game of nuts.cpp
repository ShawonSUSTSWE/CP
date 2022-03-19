#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int heap, win = 0, n, flag = 0;
    vector <int> nut;
    cin >> heap;
    for ( int i = 0; i < heap; i++ )
    {
        cin >> n;
        nut.push_back(n);
    }
    for ( int i = 0; i < nut.size(); i++ )
    {
        nut[i]--;
        here:
        if( nut[i] > 0 && nut[i] % 2 == 0 )
        {
            nut[i] = nut[i]-2;
            win++;
            goto here;
        }
    }
    if ( win % 2 == 1 )
        {
            cout << "Daenerys\n";
        }
        if ( win % 2 == 0 )
        {
            cout << "Stannis\n";
        }
    return 0;
}
