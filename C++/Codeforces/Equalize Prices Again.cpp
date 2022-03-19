#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int n, l = 1, r, num[1001], sum1 = 0, sum2 = 0;
    cin >> n;
    r = n;
    for ( int i = 1; i <= n; i++ )
    {
        cin >> num[i];
    }
    for ( int i = 1; i <= n; i++ )
    {
        if (i%2)
            sum1 += max(num[l],num[r]);
        else
            sum2 += max(num[l],num[r]);
        if(num[l]>num[r])
            l++;
        else
            r--;
    }
    cout << sum1 << " " << sum2 << endl;
}
