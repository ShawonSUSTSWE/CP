#include <bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define fl              float
#define db              double
#define sd(a)           scanf("%d",&a)
#define sdd(a,b)        scanf("%d%d",&a,&b)
#define sddd(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define sl(a)           scanf("%lld",&a)
#define sll(a,b)        scanf("%lld%lld",&a,&b)
#define slll(a,b,c)     scanf("%lld%lld%lld",&a,&b,&c)
#define su(a)           scanf("%llu",&a)
#define suu(a,b)        scanf("%llu%llu",&a,&b)
#define suuu(a,b,c)     scanf("%llu%llu%llu",&a,&b,&c)
#define sf(a)           scanf("%lf",&a)
#define sff(a,b)        scanf("%lf%lf",&a,&b)
#define sfff(a,b,c)     scanf("%lf%lfld%lf",&a,&b,&c)
#define pd(a)           printf("%d\n",a)
#define pf(a)           printf("%f\n",a)
#define pl(a)           printf("%lld\n",a)
#define pu(a)           printf("%llu\n",a)
#define fr(i,x,n,k)     for(int i=x;i<=n;i += k)
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX
#define IOS             ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl              '\n'
#define testcase	    int T; for ( cin >> T; T--; )

using namespace std;

int main()

{
    int n, matchlen = 0;
    string a, b;
    cin >> n >> a >> b;
    vector<int> str1[26], str2[26], q1, q2, r1(26), r2(26);
    vector<pair<int,int>> ans;
    for ( int i = 0; i < a.length(); i++ )
    {
        if ( a[i] == b[i] && a[i] != '?' ) matchlen++;
        if ( a[i] != '?' )
            str1[a[i]-'a'].pb(i+1);
        else q1.pb(i+1);
        if ( b[i] != '?' )
            str2[b[i]-'a'].pb(i+1);
        else q2.pb(i+1);
    }
    for ( int i = 0; i < 26; i++ )
    {
        for ( int j = 0; j < min(str1[i].size(),str2[i].size()); j++ )
        {
            ans.pb(mp(str1[i][j],str2[i][j]));
        }
        r1[i] = r2[i] = min(str1[i].size(),str2[i].size());
    }
    for ( int i = 0; i < 26; i++ )
    {
        while(!q2.empty() && r1[i] < str1[i].size() )
        {
            ans.pb(mp(str1[i][r1[i]],q2[q2.size()-1]));
            q2.pop_back();
            r1[i]++;
        }
    }
    for ( int i = 0; i < 26; i++ )
    {
        while(!q1.empty() && r2[i] < str2[i].size() )
        {
            ans.pb(mp(q1[q1.size()-1], str2[i][r2[i]]));
            q1.pop_back();
            r2[i]++;
        }
    }
    for ( int i = 0; i < min(q1.size(), q2.size()); i++ ) ans.pb(mp(q1[i],q2[i]));
    cout << ans.size() << endl;
    for ( auto i : ans )
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
