/*

 _____                           ______
|      |    |   /\  \          /|      ||\   |
|_____ |____|  /  \  \        / |      || \  |
     | |    | /----\  \  /\  /  |      ||  \ |
_____| |    |/      \  \/  \/   |______||   \|

*/


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
    testcase
    {
        int n;
        cin >> n;
        int rating[n+1], l = 0, d = 0;
        vector <int> good, bad;
        string mrating;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> rating[i];
        }
        cin >> mrating;
        for ( int i = 0; i < mrating.length(); i++ )
        {
            if(mrating[i] == '0') d++;
            else l++;
        }
        if( l == mrating.length() || d == mrating.length())
        {
            //cout << d << " " << l << endl;
            for (int i = 1; i <= n; i++ )
                cout << rating[i] << " ";
            cout << nl;
        }
        else
        {
            vector<int> s1, s2;
            for ( int i = 1; i <= n; i++ )
            {
                //cout << rating[i] << " " << d << " " << l << nl;
                if(rating[i] > d && mrating[i-1] == '0')
                {
                    //cout << i << nl;
                    s1.pb(i);
                } 
                else if(rating[i] <= n-l && mrating[i-1] == '1')
                {
                    //cout << i << nl;
                    s2.pb(i);
                }
            }
            for ( int i = 0; i < min(s1.size(),s2.size()); i++ )
            {
                swap(rating[s1[i]],rating[s2[i]]);
            }
            for ( int i = 1; i <= n; i++ )
            {
                cout << rating[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}