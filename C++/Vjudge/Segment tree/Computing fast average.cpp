#include <bits/stdc++.h>
using namespace std;

#define INT_MAX 1<<30

typedef long long ll;


#define mid ((b+e)/2)

const int sz=100005;

ll tree[sz*4],lazy[sz*4];
ll ara[sz];

void build(ll node,ll b,ll e)
{
    if(b==e){
        tree[node]=ara[b];
        return;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    tree[node]=tree[node*2]+tree[node*2+1];
}

void propagate(ll node,ll b,ll e)
{
    tree[node] = lazy[node]*(e-b+1);
    if(b!=e){
        lazy[node*2]=lazy[node];
        lazy[node*2+1]=lazy[node];
    }
    lazy[node]=-1;
}



void update(ll node,ll b,ll e,ll l,ll r,ll val)
{
    if(lazy[node]!=-1) propagate(node,b,e);
    if(b>r || e<l) return;
    if(b>=l && e<=r){
        tree[node] = val*(e-b+1);
        if(b!=e){
            lazy[node*2] = val;
            lazy[node*2+1] = val;
        }
        return;
    }
    update(node*2,b,mid,l,r,val);
    update(node*2+1,mid+1,e,l,r,val);
    tree[node]=tree[node*2]+tree[node*2+1];
}

ll query(ll node,ll b,ll e,ll l,ll r)
{
    if(lazy[node]!=-1) propagate(node,b,e);
    if(b>r || e<l) return 0ll;
    if(b>=l && e<=r) return tree[node];
    return query(node*2,b,mid,l,r)+query(node*2+1,mid+1,e,l,r);
}


int main()
{
    ll T, c = 1;
    cin >> T;
    while(T--)
    {
        memset(ara,0,sizeof(ara));
        memset(tree,0,sizeof(tree));
        memset(lazy,-1,sizeof(lazy));
        ll n, q;
        printf("Case %lld:\n", c++);
        scanf("%lld %lld", &n, &q);
        build(1,0,n-1);
        while(q--)
        {
            ll que, pos1, pos2, val;
            scanf("%lld", &que);
            if ( que == 1 )
            {
                scanf("%lld %lld %lld", &pos1, &pos2, &val);
                update(1,0,n-1,pos1,pos2,val);
            }
            else
            {
                scanf("%lld %lld", &pos1, &pos2);
                ll sum = query(1,0,n-1,pos1,pos2);
                if ( sum % (pos2-pos1+1) == 0 )
                    printf("%lld\n", sum/(pos2-pos1+1));
                else
                    printf("%lld/%lld\n", sum/__gcd(sum,(pos2-pos1+1)), (pos2-pos1+1)/__gcd(sum,(pos2-pos1+1)));
            }

        }
    }
}
