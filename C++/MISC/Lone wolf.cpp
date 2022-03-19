#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int x=1, y=num, m, v, z=num;
	while(1){
		if(y-x<2) m=x;
		else{
		m=(x+y)/2;
		int a=(m-x+1)/2;
		m=x+(a*2)-1;
	}
		printf("0 %d %d\n", x, m);
		fflush(stdout);
		cin>>v;
		if(v) z=m, y=m;
		else x=m+1, y=z;
		if(x==y&&v){
			printf("1 %d %d\n", v, x);
			fflush(stdout);
			break;
		}
	}
}
