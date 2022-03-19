#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mid ((b+e)>>1)

const int sz=100005;
struct node{
    int arr[3];
    node()
    {
        memset(arr,0,sizeof arr);
    }
    void plus()
    {
        swap(arr[2],arr[0]);
        swap(arr[2],arr[1]);
    }
};

node tree[sz*4];
ll lazy[sz*4];
void propagate(int node,int b,int e)
{
    lazy[node]%=3;
    if(lazy[node]==0)return;
    if(lazy[node])
    {
        tree[node].plus();
        if(lazy[node]==2)tree[node].plus();
    }
    if(b!=e){
        lazy[node*2]+=lazy[node];
        lazy[node*2+1]+=lazy[node];
    }
    lazy[node]=0ll;
}


void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].arr[0]=1;
        tree[node].arr[1]=0;
        tree[node].arr[2]=0;
        return;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    for(int i=0;i<3;i++)
        tree[node].arr[i]=tree[node*2].arr[i]+tree[node*2+1].arr[i];
}
void update(int node,int b,int e,int l,int r,ll val)
{
    propagate(node,b,e);
    if(b>r || e<l) return;
    if(b>=l && e<=r){
        lazy[node]+=val;
        propagate(node,b,e);
        return;
    }
    update(node*2,b,mid,l,r,val);
    update(node*2+1,mid+1,e,l,r,val);
    for(int i=0;i<3;i++)
        tree[node].arr[i]=tree[node*2].arr[i]+tree[node*2+1].arr[i];
}

ll query(int node,int b,int e,int l,int r)
{
    propagate(node,b,e);
    if(b>r || e<l) return 0ll;
    if(b>=l && e<=r) return tree[node].arr[0];
    return query(node*2,b,mid,l,r)+query(node*2+1,mid+1,e,l,r);
}

int main()
{
//    freopen("I.txt","w",stdout);
    int t;
    scanf("%d", &t);
    for(int tst=1; tst<=t; tst++){
        printf("Case %d:\n", tst);
        memset(lazy, 0, sizeof(lazy));
        int n, q;
        scanf("%d%d", &n, &q);
        build(1, 1, n);
        while(q--){
            int f, i, j, v;
            scanf("%d%d%d", &f, &i, &j);
            i++, j++;
            if(f) printf("%d\n", query(1, 1, n, i, j));
            else update(1, 1, n, i, j,1);
        }
    }
}
