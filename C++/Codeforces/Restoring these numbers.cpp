#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, st;
    cin >> n;
    vector < int > t1, t2, t3;
    for ( int i = 0; i < n; i++ )
    {
        cin >> st;
        if ( st == 1 )
            t1.push_back(i+1);
        if ( st == 2 )
            t2.push_back(i+1);
        if ( st == 3 )
            t3.push_back(i+1);
    }
    cout << min(min(t1.size(),t2.size()),t3.size()) << endl;
    for ( int i = 0; i < min(min(t1.size(),t2.size()),t3.size()); i++ )
    {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << endl;
    }
}
