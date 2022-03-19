#include<bits/stdc++.h>
using namespace std;
long long i,a[100005],n,S=0,d=0;
int main()
{cin>>n;
for(i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+n+1);
for(i=1;i<=n;i++)
    if(a[i]>=S){d++;S+=a[i];}
cout<<d;
return 0;}
