#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num[3], exp[4];
    for  ( int i = 0; i < 3; i++ )
        cin >> num[i];
    exp[0] = (num[0]+num[1])*num[2];
    exp[1] = num[0]*num[1]*num[2];
    exp[2] = (num[2]+num[1])*num[0];
    exp[3] = num[0]+num[1]+num[2];
    sort ( exp, exp+4);
    cout << exp[3] << endl;
    return 0;
}
