#include<bits/stdc++.h>
using namespace std;

int main()
{ int n,m;
cin>>n>>m;
int a,cnt=1 ;
map<int,int> x,y;
for(int i=1;i<m+1;i++)
{ cin>>a;
x[a]++;
y[x[a]]++;
cout << x[a] << " " << y[x[a]] << endl;
if(y[cnt]==n)
{cout<<1;
cnt++;}

else
cout<<0;}
}
