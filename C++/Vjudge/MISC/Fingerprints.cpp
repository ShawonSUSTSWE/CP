#include<bits/stdc++.h>

using namespace std;

bool num[10];

int main ()

{
    int n, m;
    cin >> n >> m;
    int door[n], finger[m], code[10], j = 0;
    for ( int i = 0; i < n; i++ )
        cin >> door[i];
    for ( int i = 0; i < m; i++ )
    {
        cin >> finger[i];
        num[finger[i]] = true;
    }
    for ( int i = 0; i < n; i++ )
    {
        if (num[door[i]])
            cout << door[i] << " ";
    }
    cout << endl;
}
