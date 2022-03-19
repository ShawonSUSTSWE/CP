#include<bits/stdc++.h>
#define ll long long int

using namespace std;

#define mid ((b+e)/2)

const int sz=300005; // size of array

ll arr[sz],seg[sz*4], n;

void build(ll node,ll b,ll e)
{
    if(b==e){
        seg[node]=b;
        return;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    if (arr[seg[node * 2]] < arr[seg[node * 2 + 1]]) seg[node] = seg[node * 2];
    else seg[node] = seg[node * 2 + 1];
}

ll query(ll node,ll b,ll e,ll l,ll r)
{
    if(b>r || e<l) return -1;
    if(b>=l && e<=r){
        return seg[node];
    }

    ll i = query(node*2,b,mid,l,r);
    ll j = query(node*2+1,mid+1,e,l,r);

    if (i == -1) return j;
    if (j == -1) return i;
    if ( arr[i] < arr[j] ) return i;
    else return j;

}

ll Area(ll b, ll e) {
    if (b > e) return 0;
    if (b == e) return arr[b];
    ll mini = query(1, 1, n, b, e);
    ll maxi = max(Area(b, mini - 1), Area(mini + 1, e));
    return max(maxi, (ll)(e - b + 1) * arr[mini]);
}

int main ()

{
    ll T, c = 1;
    cin >> T;
    while(T--)
    {
        scanf("%lld", &n);
        for ( ll i = 1; i <= n; i++ )
        {
            scanf("%lld", &arr[i]);
        }
        build(1,1,n);
        printf("Case %lld: %lld\n", c++, Area(1,n));
    }
}
