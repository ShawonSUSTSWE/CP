#include<bits/stdc++.h>

using namespace std;

int main()

{
    double neg = 0, zero = 0, pos = 0;
    int n, arr[102];
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
        if ( arr[i] < 0 )
        {
            neg++;
        }
        if ( arr[i] > 0 )
        {
            pos++;
        }
        else
        {
            zero++;
        }
    }
    printf("%lf\n%lf\n%lf", pos/n, neg/n, zero/n);
    return 0;
}
