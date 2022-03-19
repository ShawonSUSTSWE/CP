#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           cout<<a<<endl
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999


using namespace std;
int main(){
    int t;
    sf(t);
    for (int x = 1; x <= t; ++x)
    {
        int n, m;
        sff(n,m);
        int n1, n2, w;
        std::vector<int> vs[n+10], ws[n+1];
        int a1[n+10];
        while(m--){
            sfff(n1,n2,w);
            vs[n1].pb(n2);
            vs[n2].pb(n1);
            ws[n1].pb(w);
            ws[n2].pb(w);
        }
        int d;
        sf(d);
        for (int i = 0; i <= n+9; ++i)
            a1[i] = 9999999;
        a1[d]=0;
        queue<pair<int, int>>q;
        q.push(mp(0, d));
        while(!q.empty())
        {
            pair<int, int>p = q.front();
            int x = p.second;
            q.pop();
            for (int i = 0; i < vs[x].size(); ++i)
            {
                if(max(a1[x],ws[x][i])<a1[vs[x][i]])
                {
                    a1[vs[x][i]] = max(a1[x],ws[x][i]);
                    q.push(mp(-a1[vs[x][i]], vs[x][i]));
                }
            }
        }
        printf("Case %d:\n", x);
        for (int i = 0; i < n; ++i)
        {
            if(a1[i]==9999999)
                printf("Impossible\n");
            else
            {
                printf("%d\n", a1[i]);
            }
        }
    }
return 0;
}
