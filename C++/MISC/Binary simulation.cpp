#include <bits/stdc++.h>

using namespace std;

#define INT_MAX 1<<30

typedef long long ll;


#define mid ((b+e)/2)

const int sz=100005;

ll tree[sz*4],lazy[sz*4];
ll ara[sz];

void build(int node,int b,int e)
{
    if(b==e){
        tree[node]=ara[b];
        return;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    tree[node]=tree[node*2]+tree[node*2+1];
}

void propagate(int node,int b,int e)
{
    tree[node]+=lazy[node]*(e-b+1);
    if(b!=e){
        lazy[node*2]+=lazy[node];
        lazy[node*2+1]+=lazy[node];
    }
    lazy[node]=0ll;
}



void update(int node,int b,int e,int l,int r,ll val)
{
    propagate(node,b,e);
    if(b>r || e<l) return;
    if(b>=l && e<=r){
        tree[node]+=val*(e-b+1);
        if(b!=e){
            lazy[node*2]+=val;
            lazy[node*2+1]+=val;
        }
        return;
    }
    update(node*2,b,mid,l,r,val);
    update(node*2+1,mid+1,e,l,r,val);
    tree[node]=tree[node*2]+tree[node*2+1];
}

ll query(int node,int b,int e,int l,int r)
{
    propagate(node,b,e);
    if(b>r || e<l) return 0ll;
    if(b>=l && e<=r) return tree[node];
    return query(node*2,b,mid,l,r)+query(node*2+1,mid+1,e,l,r);
}

int main ()

{
    int T, t = 1;
    cin >> T;
    while(T--)
    {
        printf("Case %d:\n", t++);
        char bin[100003], c;
        memset(ara,0,sizeof(ara));
        memset(tree,0,sizeof(tree));
        memset(lazy,0,sizeof(lazy));
        int pos1, pos2, q;
        scanf("%s", &bin);
        int n = strlen(bin);
        for ( int i = 0; i < strlen(bin); i++ )
            ara[i+1] = bin[i] - '0';
        build(1,1,n);
        cin >> q;
        getchar();
        while(q--)
        {
            scanf("%c", &c);
            if ( c == 'I' )
            {
                scanf("%d %d", &pos1, &pos2);
                update(1,1,n,pos1,pos2,1);
            }
            else
            {
                scanf("%d",&pos1);
                if(query(1,1,n,pos1,pos1) % 2 == 0 )
                    printf("0\n");
                else
                    printf("1\n");
            }
            getchar();
        }
    }
}
