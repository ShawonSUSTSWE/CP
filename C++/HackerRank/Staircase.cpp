#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, i, j, k;
    cin >> n;
    int c = n-1;
    for ( i = 0; i < n; i++ )
    {
        for ( k = c; k > 0; k-- )
        {
            cout << " ";
        }
        c--;
        for ( j = 0; j < i+1; j++ )
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
