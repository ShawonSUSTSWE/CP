#include <bits/stdc++.h>

using namespace std;

#define INT_MAX 1<<30

typedef long long ll;


#define mid ((b+e)/2)

const int sz=100005;

ll tree[sz*4][3],lazy[sz*4];
ll ara[sz];

void build(ll node,ll b,ll e)
{
    tree[node][0] = ( e - b ) + 1;
    tree[node][1] = 0 ;
    tree[node][2] = 0 ;
    lazy[node] = 0;
    if( b == e )
    {
        tree[node][0] = 1;
        return ;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
}

void propagate(ll node,ll b,ll e)
{
        if ( b != e )
        {
            lazy[2*node] = ( lazy[node] + lazy[2*node])%3;
            lazy[2*node+1] = ( lazy[node] + lazy[2*node+1])%3;
        }
        if(lazy[node] == 1)
        {
            tree[node][2] = tree[node][1];
            tree[node][1] = tree[node][0];
            tree[node][0] = ( e - b ) + 1 - tree[node][1] - tree[node][2];
        }
        if(lazy[node] == 2 )
        {
            tree[node][1] = tree[node][2];
            tree[node][2] = tree[node][0];
            tree[node][0] = ( e - b ) + 1 - tree[node][1] - tree[node][2];
        }
       lazy[node] = 0;
}



void update(ll node,ll b,ll e,ll l,ll r)
{
    if(lazy[node])propagate(node,b,e);
    if(b>r || e<l) return;
    if(b>=l && e<=r)
    {
        if(b!=e )
        {
            lazy[2*node] = ( lazy[2*node]+1)%3; // updating Lazy value
            lazy[2*node+1]= ( lazy[2*node+1] + 1 ) % 3;
        }
        tree[node][2] = tree[node][1];
        tree[node][1] = tree[node][0];
        tree[node][0] = ( e - b ) + 1 - tree[node][1] - tree[node][2];
        return;
    }

    update(node*2,b,mid,l,r);
    update(node*2+1,mid+1,e,l,r);

    for ( int k = 0; k < 3; k++ )
    tree[node][k]=tree[node*2][k]+tree[node*2+1][k];
}

ll query(ll node,ll b,ll e,ll l,ll r)
{
    if(lazy[node])propagate(node,b,e);
    if(b>r || e<l) return 0;
    if(b>=l && e<=r) return tree[node][0];
    ll res1 = query(2*node,b,mid,l,r);
    ll res2 = query(2*node+1,mid+1,e,l,r);
    for ( int k = 0 ; k < 3 ; k++ ) tree[node][k] = tree[2*node][k] + tree[2*node+1][k];
    return res1+res2;
}

int main()

{
    ll T, c = 1;
    scanf("%lld", &T);
    while(T--)
    {
        ll n, q, l, r, que;
        memset(lazy,0,sizeof(lazy));
        memset(tree,0,sizeof(tree));
        printf("Case %lld:\n", c++);
        scanf("%lld %lld", &n, &q);
        build(1,0,n-1);
        while(q--)
        {
            scanf("%lld %lld %lld", &que, &l, &r);
            if(!que) update(1,0,n-1,l,r);
            else printf("%lld\n", query(1,0,n-1,l,r));
        }
    }
}
