#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()

{
    ll num, box, ans = 0;
    cin >> box >> num;
     for ( int i = 1; i <= box; i++ )
     {
         if ( num % i == 0 && (num/i) <= box )
         {
             ans++;
         }
         if ( i > num )
            break;
     }
     cout << ans << endl;
     return 0;
}
