#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n, num;
    cin >> T;
    while(T--)
    {
        int odd = 0;
        cin >> n;
        for(int i = 1; i <= n; i++ )
        {
            cin >> num;
            if(num%2)
                odd++;
        }
        if((odd == n && n % 2 == 0) || odd == 0 )
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
