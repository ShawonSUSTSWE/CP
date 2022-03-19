#include<bits/stdc++.h>

using namespace std;

int num1[6], num2[6];

int main ()

{
    int n, num;
    cin >> n;
    for ( int i = 0; i < 2; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            cin >> num;
            if (!i)
            {
                num1[num]++;
            }
            else{
              num2[num]++;
            }
        }
    }
    if ( (num1[1] + num2[1]) % 2 || (num1[2] + num2[2]) % 2 ||
        (num1[3] + num2[3]) % 2 || (num1[4] + num2[4]) % 2 || (num1[5] + num2[5]) % 2)
    {
        cout << "-1\n";
        return 0;
    }
    else
    {
        int ans = 0;
        for ( int i = 1; i <= 5; i++ )
        {
            if (num1[i]>num2[i]) ans += (num1[i]-num2[i])/2;
        }
        cout << ans << endl;
    }
}
