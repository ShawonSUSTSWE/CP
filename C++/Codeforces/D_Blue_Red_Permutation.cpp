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

int num[200005];

int main()

{
    int n;
    string colour;
    testcase
    {
        cin >> n;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> num[i];   
        }
        cin >> colour;
        vector<int> red, blue;
        for ( int i = 1; i <= n; i++ )
        {
            (colour[i-1] == 'B'? blue:red).pb(num[i]);
        }
        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end(), greater<int>());
        bool pos = true;
        for ( int i = 0; i < blue.size(); i++ )
        {
            //cout << blue[i] << endl;
            if(blue[i] < i+1) pos = false; 
        }
        for ( int i = 0; i < red.size(); i++ )
        {
            //cout << red[i] << endl;
            if(red[i] > n-i) pos = false;
        }
        cout << (pos? "YES\n":"NO\n");
    }
    return 0;
}