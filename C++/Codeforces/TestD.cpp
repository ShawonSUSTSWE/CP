#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pi (acos(-1))
#define ull unsigned long long
#define ld long double
#define all(v) v.begin(), v.end()
///freopen("input.txt","r",stdin);
///freopen("output.txt","w",stdout);
ll LCM(ll a, ll b)
{
    ll g = __gcd(a, b);
    return (a / g) * b;
}
string numtostr(ll n)
{
    ostringstream str1;
    str1 << n;
    return str1.str();
}
ll strtonum(string s)
{
    ll x;
    stringstream str1(s);
    str1 >> x;
    return x;
}
ll ncr(ll n, ll r)
{
    r=min(r,n-r);
    ll A[r],i,j,B[r];
    iota(A,A+r,n-r+1);
    iota(B,B+r,1);

    ll g;
    for(i=0; i<r; ++i)
        for(j=0; j<r; ++j)
        {
            if(B[i]==1)
                break;
            g=__gcd(B[i], A[j] );
            A[j]/=g;
            B[i]/=g;
        }
    ll ans=1;
    for(i=0; i<r; i++)
        ans=(ans*A[i]);
    return ans;
}
int q,m,x,y,i;
bool s[100000];
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>q;
    vector<pair<int,int> > mon,pol;
    int j=1;
    for(i=0; i<q; ++i)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y;
            mon.pb({y,j});
            pol.pb({y,j});
            ++j;
        }
        else if(x==2)
        {
            int mn=mon.size();
            for(i=0; i<mn; ++i)
            {
                if(s[mon[i].second]==false)
                {
                    s[mon[i].second]=true;
                    cout<<mon[i].second<<' ';
                    break;
                }
            }
        }
        else
        {
            int pl=pol.size();
            sort(all(pol));
            reverse(all(pol));
            for(i=0;i<pl;++i)
            {
                if(s[pol[i].second]==false)
                {
                    s[pol[i].second]=true;
                    cout<<pol[i].second<<' ';
                    break;
                }
            }

        }
    }
    return 0;
}
