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
#define fr(i,x,n)       for(int i=x;i<n;i++)
#define rep(i,n)        for(int i=1;i<=n;i++)
#define pb(a)           push_back(a)
#define pii             pair<int,int>
#define pli             pair<long long int,int>
#define mp(a,b)         make_pair(a,b)
#define INF             LONG_MAX
#define IOS             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl              '\n'
#define mid ((b+e)/2)

const int sz=100010;

ll tree[sz*4],lazy[sz*4];
ll arr[sz];


void propagate(ll node,ll b,ll e)
{
    tree[node]=(e-b+1)-tree[node];
    if(b!=e){
        lazy[node*2] = 1-lazy[node*2];
        lazy[node*2+1] = 1-lazy[node*2+1];
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
            lazy[node*2] = 1-lazy[node*2];
            lazy[node*2+1] = 1-lazy[node*2+1];
        }
        return;
    }
    update(node*2,b,mid,l,r);
    update(node*2+1,mid+1,e,l,r);
    tree[node]=tree[node*2] + tree[node*2+1];
}

int query(int node,int b,int e,int l,int r)
{
    if(b>r || e<l) return 0;
    if (lazy[node]) propagate(node,b,e);
    if(b>=l && e<=r) return tree[node];
    int p1 = query(node*2,b,mid,l,r);
    int p2 = query(node*2+1,mid+1,e,l,r);
    return p1+p2;
}


int main()
{
    memset(arr, 0, sizeof(arr));
    memset(tree, 0, sizeof(tree));
    memset(lazy, 0, sizeof(lazy));
    int n, q;
    for(sdd(n,q);q--;)
    {
        int t, l, r;
        sddd(t,l,r);
        if (!t) update(1, 1, n, l+1, r+1);
        else printf("%d\n", query(1, 1, n, l+1, r+1));
    }
}
