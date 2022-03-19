#include <bits/stdc++.h>

using namespace std;

#define INT_MAX 1<<30

typedef long long ll;


#define mid ((b+e)/2)

const int sz=100005;

ll tree[sz*4],lazy[sz*4];
ll arr[sz];


void propagate(ll node,ll b,ll e)
{
    tree[node]=(e-b+1)-tree[node];
    if(b!=e){
        lazy[node*2] = 1-lazy[node];
        lazy[node*2+1] = 1-lazy[node];
    }
    lazy[node]=0;
}



void update(ll node,ll b,ll e,ll l,ll r)
{
    if(b>e) return;
    if (lazy[node])propagate(node,b,e);
    if(b>r || e<l) return;
    if(b>=l && e<=r)
    {
        tree[node]=(e-b+1)-tree[node];
        if(b!=e)
        {
            lazy[node*2] = 1-lazy[node];
            lazy[node*2+1] = 1-lazy[node];
        }
        return;
    }
    update(node*2,b,mid,l,r);
    update(node*2+1,mid+1,e,l,r);
    tree[node]=tree[node*2] + tree[node*2+1];
}

ll query(ll node,ll b,ll e,ll l,ll r)
{
    if(b>r || e<l) return 0;
    if (lazy[node]) propagate(node,b,e);
    if(b>=l && e<=r) return tree[node];
    ll p1 = query(node*2,b,mid,l,r);
    ll p2 = query(node*2+1,mid+1,e,l,r);
    return p1+p2;
}


int main()
{
    memset(arr, 0, sizeof(arr));
    memset(tree, 0, sizeof(tree));
    memset(lazy, 0, sizeof(lazy));
    ll n, q;
    for(sll(n,q);q--;)
    {
        ll t, l, r;
        slll(t,l,r);
        if (!t) update(1, 1, n, l+1, r+1);
        else printf("%d\n", query(1, 1, n, l+1, r+1));
    }
}
