#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%d\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)

using namespace std;


char tile[55][55];
bool checker[4];

void check ( char w )

{
    if ( w == 'f' )
        checker[0] = 1;
    else if ( w == 'a' )
        checker[1] = 1;
    else if ( w == 'c' )
        checker[2] = 1;
    else if ( w == 'e' )
        checker[3] = 1;
}


int main ()

{
    int len, wid, cnt = 0;
    cin >> len >> wid;
    for ( int i = 0; i < len; i++ )
        scanf("%s", &tile[i]);
    for ( int i = 0; i < len-1; i++ )
    {
        for ( int  j = 0; j < wid-1; j++ )
        {
            check(tile[i][j]);
            check(tile[i+1][j]);
            check(tile[i][j+1]);
            check(tile[i+1][j+1]);
            if ( checker[0] && checker[1] && checker[2] && checker[3] )
                cnt++;
            memset( checker, 0, sizeof(checker));
        }
    }
    cout << cnt << endl;
}
