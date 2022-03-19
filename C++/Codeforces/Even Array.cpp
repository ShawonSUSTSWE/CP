#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%llu\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX

using namespace std;

int main()

{
    int n, m, ps, qs, pb, qb;
    sfff(n,ps,qs),sfff(m,pb,qb);
    int Bat[qb] = {0}, Sup[qs] = {0};
    for ( int i = 1; i <= n; i++ ) Sup[(ps*i)%qs]++;
    for ( int i = 1; i <= m; i++ ) Bat[(pb*i)%qb]++;
    sort(Bat,Bat+qb),sort(Sup,Sup+qs);
    double avg = 1;
    for ( int i = 0; i < min(n,m); i++ )
    {
        avg += (Sup[i]-Bat[i]);
    }
    cout << avg/max(n,m) << endl;
}
