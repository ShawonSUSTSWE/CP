#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fl              float
#define db              double
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%llu %llu",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define pf(a)           printf("%llu\n",a)
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             9999999


using namespace std;

int main ()

{
    int num, a;
    cin >> num;
    while(num--){
        cin >> a;
        if ( a == 1 )
            cout << "-1\n";
        else
        {
            cout << 2;
            a--;
            while(a--)
                cout << 3;
            cout << "\n";
        }
    }
}
