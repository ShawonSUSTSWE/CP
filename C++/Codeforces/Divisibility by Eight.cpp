#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int x;
ll ans=1e10+5;

void lucky(ll num,int e)

{
	if (num >1e10)return;
	if (num >=x &&e ==0){
		ans=min(ans,num);
	}
	lucky(num *10+4 ,e +1);
	lucky(num *10+7 ,e -1);
}
int main() {

	cin >>x;
	lucky(0,0);
	cout <<ans<<endl;


	return 0;
}
