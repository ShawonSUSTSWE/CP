#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int pos = 0, neg = 0, n, num;
    cin >> n;
    int t = n;
    while(t--)
    {
        cin >> num;
        if ( num > 0 ) pos++;
        else if  ( num < 0 ) neg++;
    }
    if(pos >= n/2+n%2 ) cout << 1 << endl;
    else if(neg >= n/2+n%2 ) cout << -1 << endl;
    else cout << 0 << endl;
}
