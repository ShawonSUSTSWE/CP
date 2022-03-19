#include<bits/stdc++.h>
#define ull unsigned long long

using namespace std;

ull power( ull x, ull y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main ()

{
   int  T;
   cin >> T;
   while(T--)
   {
       ull n, sum = 0;
       cin >> n;
       for ( int i = n; i >= 1; i-- )
       {
           if ( i == n || i < n/2 )
                sum += power(2,i);
           else
                sum -= power(2,i);
       }
       cout << sum << endl;
   }
}

