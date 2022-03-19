#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num;
    cin >> num;
    int x[num];
    for  ( int i = 0; i < num; i++ )
    {
        cin >> x[i];
    }
    sort(x,x+num);
    int q;
    long long int qi;
    cin >> q;
    while(q--)
    {
        cin >> qi;
        cout << upper_bound(x,x+num,qi)-x << endl;
    }
}
