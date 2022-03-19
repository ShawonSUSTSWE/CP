#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;

void printPair(pair<int, int> p)
{
    int f = p.first;
    int s = p.second;
    cout << f << " " << s;
}

int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        string s;
        cin>>s;
        int x=0,y=0,n=s.length();
        queue<pair<int,int>>l,r,u,d;
        com(i,n)
        {
            if(s[i]=='L')
            {
                x--;
                if(!r.empty())
                    r.pop();
                else
                    l.push({x,y});
            }
            else if(s[i]=='R')
            {
                x++;
                if(!l.empty())
                    l.pop();
                else
                    r.push({x,y});
            }
            else if(s[i]=='D')
            {
                y--;
                if(!u.empty())
                    u.pop();
                else
                    d.push({x,y});
            }
            else if(s[i]=='U')
            {
                y++;
                if(!d.empty())
                    d.pop();
                else
                    u.push({x,y});
            }
        }
        if(!r.empty() && l.empty() && d.empty()&& u.empty())
            printPair(r.front());
        else if(r.empty() && !l.empty() && d.empty()&& u.empty())
            printPair(l.front());
        else if(r.empty() && l.empty() && !d.empty()&& u.empty())
            printPair(d.front());
        else if(r.empty() && l.empty() && d.empty()&& !u.empty())
            printPair(u.front());
        else
            cout << "0 0";
        cout << endl;
    }
}
