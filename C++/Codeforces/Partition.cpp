#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int b[100005];

int main ()

{
   int T, n, a[100005], q, l, r;
   for ( cin >> T; T--; )
   {
       cin >> n;
       for ( int i = 1; i <= n; i++ )
       {
           cin >> a[i];
           if ( a[i] % 2 ) b[i] = 1;
           b[i] += b[i-1];
       }
       cin >> q;
       while(q--)
       {
           cin >> l >> r;
           if ( b[r]-b[l-1] == r-l+1 ) cout << "ODD\n";
           else cout << "EVEN\n";
       }

   }
}
