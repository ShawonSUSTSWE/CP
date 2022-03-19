#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int nA, nB, k, m;
    cin >> nA >> nB;
    int A[nA+1], B[nB+1];
    cin >> k >> m;
    for ( int i = 1; i <= nA; i++ )
        cin >> A[i];
    for ( int i = 1; i <= nB; i++ )
        cin >> B[i];
    sort(A+1, A+nA+1);
    sort(B+1, B+nB+1);
    if ( A[k] < B[nB-m+1] )
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
