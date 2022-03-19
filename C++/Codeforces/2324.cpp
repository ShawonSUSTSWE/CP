#include<bits/stdc++.h>
using namespace std;
int n,m,x,l,r,i,s,a[10179];
int main(){
	for(cin>>n>>m,i=1;i<=n;i++)cin>>a[i];
	for(;m--;){
		cin>>l>>r>>x;
		for(s=0,i=l;i<=r;i++){
            cout << a[i] << " " << a[x] << " " << s << endl;
            a[i]<a[x]?s++:0;
		}
		cout<<(s+l==x?"Yes":"No")<<endl;
	}
}
