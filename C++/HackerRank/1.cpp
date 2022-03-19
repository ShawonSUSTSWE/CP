#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()

{
    int sum1  = 0, sum2 = 0, t_sum, n;
    int num[100][100];
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            cin >> num[i][j];
        }
    }
    for ( int i = 0; i < n; i++ )
    {
        sum1 += num[i][i];
    }
    for ( int i = 0, j = n - 1; i < n, j >= 0; i++, j-- )
    {
        sum2 += num[i][j];
    }
    t_sum = abs(sum1-sum2);
    cout << t_sum << "\n";
    return 0;
}
