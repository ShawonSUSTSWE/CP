//                               Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int tree[400010][4];
void make(int node, int b, int e)
{
    if(b==e)
    {
        tree[node][0]=1;
        tree[node][1]=0;
        tree[node][2]=0;
        return;
    }
    int mid=(b+e)/2;
    make(node*2,b,mid);
    make(node*2+1,mid+1,e);
    for(int i=0;i<3;i++)
        tree[node][i]=tree[node*2][i]+tree[node*2+1][i];
}
int query(int node, int b, int e, int i, int j)
{
    tree[node][3]%=3;
    if(tree[node][3]){
        int x=tree[node][0], y=tree[node][1], z=tree[node][2];
        if(tree[node][3]==1) tree[node][1]=x, tree[node][2]=y, tree[node][0]=z;
        else if(tree[node][3]==2) tree[node][2]=x, tree[node][0]=y, tree[node][1]=z;
        if(b!=e)
        tree[node*2][3]+=tree[node][3],tree[node*2+1][3]+=tree[node][3];
        tree[node][3]=0;
    }
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[node][0];
    int left=node*2, right =(node*2)+1, mid=(b+e)/2;
    int p1 = query(left, b, mid, i, j);
    int p2 = query(right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int j)
 {
    tree[node][3]%=3;
    if(tree[node][3]){
        int x=tree[node][0], y=tree[node][1], z=tree[node][2];
        if(tree[node][3]==1) tree[node][1]=x, tree[node][2]=y, tree[node][0]=z;
        else if(tree[node][3]==2) tree[node][2]=x, tree[node][0]=y, tree[node][1]=z;
        if(b!=e)
        tree[node*2][3]+=tree[node][3],tree[node*2+1][3]+=tree[node][3];
        tree[node][3]=0;
    }
    if(b>j||e<i)
        return;
    if(b>=i&&e<=j)
    {
        int x=tree[node][0], y=tree[node][1], z=tree[node][2];
        tree[node][1]=x, tree[node][2]=y, tree[node][0]=z;
        if(b!=e)
        tree[node*2][3]+=1,tree[node*2+1][3]+=1;
        tree[node][3]=0;
        return;
    }
    int left=node*2, right =(node*2)+1, mid=(b+e)/2;
    update(left, b, mid, i, j);
    update(right, mid+1, e, i, j);
    for(int ii=0; ii<3; ii++)
        tree[node][ii]=tree[left][ii]+tree[right][ii];
}
int main()
{
//    freopen("I.txt","w",stdout);
    int t;
    scanf("%d", &t);
    for(int tst=1; tst<=t; tst++){
        printf("Case %d:\n", tst);
        memset(tree, 0, sizeof(tree));
        int n, q;
        scanf("%d%d", &n, &q);
        make(1, 1, n);
        while(q--){
            int f, i, j, v;
            scanf("%d%d%d", &f, &i, &j);
            i++, j++;
            if(f) printf("%d\n", query(1, 1, n, i, j));
            else update(1, 1, n, i, j);
        }
    }
}
