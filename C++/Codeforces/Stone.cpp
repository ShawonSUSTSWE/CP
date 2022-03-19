#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%lld%lld%lld",&a,&b,&c)
#define pf(a)           printf("%d\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define MAXN            100005

using namespace std;

int h,n,p[200005];

int main ()

{
    int T;
    sf(T);
	while(T--)
	{
		int ans=0;
		sff(h,n);
		for(int i=1;i<=n;i++) sf(p[i]);
        p[n+1]=0;
		for(int i=2;i<=n;i++)
			if(p[i]-p[i+1]>=2)++ans;
			else ++i;
		pf(ans);
	}
	return 0;
}
