/*
          _____       __   __   __      __                  __
         |     \     |  | |  | |  |    |  |       /\       |  |
         |  |\  \    |  | |  | |  |    |  |      /  \      |  |
         |  | \  \   |  | |  | |  |____|  |     / /\ \     |  |
         |  |  \  \  |  | |  | |   ____   |    / /__\ \    |  |
         |  |   \  \ |  | |  | |  |    |  |   / ______ \   |  |
         |  |    \  \|  | |  | |  |    |  |  / /      \ \  |  |_________
         |__|     \_____| |__| |__|    |__| /_/        \_\ |____________|
*/
#include <bits/stdc++.h>
/*---------------------------------PB_DS---------------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k) = returns an iterator to the k-th largest element (counting from zero)
// order_of_key(k) = the number of items in a set that are strictly smaller than k.
/*-----------------------------------------------------------------------*/
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define fill(a,b)           memset(a, (b), sizeof(a))
#define debug(x)            cout<<#x<<" "<<x<<'\n';
#define sfc(a)              scanf("%c",&a)
#define pb(a)               push_back(a)
#define X                   first
#define Y                   second
#define sz(x)               x.size()
#define pii                 pair<int,int>
#define pli                 pair<long long int,int>
#define mp(a,b)             make_pair(a,b)
#define fr(i,x,n)           for(int i=x;i<n;i++)
#define rfr(i,x,n)          for(int i=x;i>n;i--)
#define Lcm(a, b)           ((a)*((b)/Gcd(a,b)))
template<typename T>T Abs(T a) {return a < 0 ? -a : a;}
template<typename T>T Max(T a, T b) {return a > b ? a : b;}
template<typename T>T Min(T a, T b) {return a < b ? a : b;}
template<typename T>T Gcd(T a, T b) {return (!b) ? a : Gcd(b, a % b);}
template<typename T>T Pow(T a, T b) {if (!b)return 1; T t = Pow(a, b / 2); return b % 2 ? a * t * t : t * t;}
template<typename T>inline void read(T &x) {
    T f = 1; char c; x = 0;
    for (c = getchar(); c < '0' || c > '9'; c = getchar())if (c == '-')f = -1;
    for (; c >= '0' && c <= '9'; c = getchar())x = x * 10 + c - '0';
    x *= f;
}
using fl = float;
using db = double;
using ll = long long;
using ull = unsigned long long;
const int mx = 1000005;
const int inf = 99999999;
const int intlim = 2147483648;
const db PI = acos(-1); //3.14159265358979323846264338328
/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};           // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
//#ifndef ONLINE_JUDGE
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
//#endif
using namespace std;
int main() {
    int t;
    sf(t);
    while (t--) {
        int n;
        sf(n);
        std::map<string, string> par;
        std::map<string, pair<string, int> > lf;
        string s1[5050], s2[5050], str;
        int x;
        char c;
        int ans = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> s1[i] >> s2[i] >> x >> c;
            ans += x;
            par[s2[i]] = s1[i];
            lf[s1[i]] = {s2[i],x};
            // if (!par.count(s1))str = s1;
        }
        for (int i = 0; i < n-1; ++i)
        {
            if (!par.count(s1[i]))str = s1[i];
        }
        string tem1, tem2;
        for (int i = 0; i < n-1; ++i)
        {
            tem1 = str;
            int y = lf[str].second;
            str = tem2 = lf[str].first;
            cout<<tem1<<" "<<tem2<<" "<<y<<c<<'\n';
        }
        cout << ans <<c<< '\n';
        // cout << str << '\n';
    }
    return 0;
}
