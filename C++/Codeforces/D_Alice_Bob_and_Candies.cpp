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
        int a = 0, b = 0, n;
        cin >> n;
        int l = 1, r = n, candy[n+1], lastcandy = 0, move = 0;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> candy[i];
        }
        while ( l <= r && r >= l) 
        {
            int eat = 0;
            if( move % 2 == 0 ) {
                if(candy[l] > lastcandy) eat = candy[l], l++;
                else
                {
                    eat = 0;
                    while ( l <= r && eat <= lastcandy)
                    {   
                        eat += candy[l];
                        l++;
                    }
                
                }
                a += eat;
            } else {
                if(candy[r] > lastcandy) eat = candy[r], r--;
                else
                {
                    eat = 0;
                    while ( r >= l && eat <= lastcandy)
                    {   
                        eat += candy[r];
                        r--;
                    }

                }
                b += eat;
            }
            lastcandy = eat;
            move++;
        }
        cout << move << " " << a << " " << b << endl;
    }
    return 0;
}
