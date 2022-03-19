#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    int sum = 0, num[n+1];
    for ( int i = 1; i <= n;i++)
        cin >> num[i], sum += num[i];
  sort(num+1,num+n+1);
  int ans=sum;
  for ( int i=2; i<=n; i++)
  {
      for ( int j = num[i]-1; j>1 ;j--)
         if ( num[i] % j == 0 )
            ans = min ( ans, sum-num[i]-num[1]+num[1]*j+num[i]/j);
  }
  cout << ans << endl;
}
