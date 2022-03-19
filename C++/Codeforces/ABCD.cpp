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

int n, a, c, b, pos, a_cnt21, c_cnt21, a_cnt22, c_cnt22, num_of_swap1, num_of_swap2, bpos1, bpos2, ac;
string s, test1, test2;

int main()

{
    freopen("abc.in","r",stdin);
    cin >> n >> s;
    for ( int i = 0; i < n; i++ )
    {
        if (s[i] == 'a') a++;
        else if ( s[i] == 'b' ) b++, pos = i;
        else if ( s[i] == 'c' ) c++;
    }
    if ( s.length() == 1 )
    {
        if (b) cout << "0\n";
        else cout << "-1\n";
        return 0;
    }
    if ( a && c && !b )
    {
        cout << "-1\n";
        return 0;
    }
    else if ( (a && b && !c) || (!a && b && c) )
    {
        cout << "0\n";
        return 0;
    }
    else
    {
        test1 = s, test2 = s;
        bpos1 = pos, bpos2 = pos;
        if ( pos == a )
        {
            num_of_swap2++;
            swap(test2[pos],test2[c]);
            bpos2 = c;
        }
        else if ( pos == c )
        {
            num_of_swap1++;
            swap(test1[pos],test1[a]);
            bpos1 = a;
        }
        else
        {
            num_of_swap1++, num_of_swap2++;
            swap(test1[pos],test1[a]);
            swap(test2[pos],test2[c]);
            bpos1 = a, bpos2 = c;
        }
        for ( int i = 0; i < bpos1; i++ )
        {
            if ( test1[i] == 'a' ) a_cnt21++;
            else if ( test1[i] == 'c' ) c_cnt21++;
        }
        if ( a_cnt21 != a )
        {
            num_of_swap1 += (a-a_cnt21);
        }
        for ( int i = 0; i < bpos2; i++ )
        {
            if ( test2[i] == 'a' ) a_cnt22++;
            else if ( test2[i] == 'c' ) c_cnt22++;
        }
        if ( a_cnt22 != a ) num_of_swap2 += (a-a_cnt22);
        cout << min (num_of_swap1,num_of_swap2) << nl;
    }
}
