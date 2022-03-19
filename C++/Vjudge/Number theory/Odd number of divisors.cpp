#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

vector <ll> v[1500];

int NOD(int n)

{
    int ans = 1, cnt = 0;
    int i = 2;
    while(i*i <= n )
    {
        cnt = 0;
        if ( n%i == 0 )
        {
            while(n%i== 0 && n != 0)
            {
                cnt++;
                n /= i;
            }
            ans *= (2*cnt+1);
        }
        if ( i == 2 )
            i++;
        else i += 2;
    }
    if ( n > 1 ) return ans*3;
    else return ans;
}

int main()

{
    for ( ll i = 2; i < 100000; i++ )
    {
        int temp = NOD(i);
        ll y = i*i;
        v[temp].push_back(y);
    }
    int T, k, ans;
    ll low, high;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %lld %lld", &k, &low, &high);
        if ( v[k].size() == 0 ) ans = 0;
        else
            ans = upper_bound(v[k].begin(),v[k].end(),high)-upper_bound(v[k].begin(),v[k].end(),low-1);
        printf("%d\n", ans);
    }
}
