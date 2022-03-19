#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, people, n25 = 0, n50 = 0;
    cin >> n;
    bool possible = true;
    while(n--)
    {
        cin >> people;
        if ( people == 25 ) n25++;
        else
        {
            if ( people == 50 ) n50++, n25--;
            else
            {
                n25--;
                if (n50) n50--;
                else n25 -= 2;
            }
        }
        if ( n25 < 0 || n50 < 0 )
            possible = false;
    }
    if(possible) cout << "YES\n";
    else cout << "NO\n";
}
