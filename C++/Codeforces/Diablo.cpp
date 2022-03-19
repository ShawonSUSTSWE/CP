#include<bits/stdc++.h>
using namespace std;

#define mid ((b+e)/2)

const int sz=300005;

long long int arr[sz],seg[sz*4];

void build(int node,int b,int e)
{
    seg[node] = 0;
    if(b==e){
        if (arr[b]) seg[node]=1;
        return;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    seg[node]=seg[node*2]+seg[node*2+1];

}

long long int query(int node,int b,int e,int l,int r)
{
    if(b>r || e<l) return 0;
    if(b>=l && e<=r){
        return seg[node];
    }
    return query(node*2,b,mid,l,r)+query(node*2+1,mid+1,e,l,r);
}

void update(int node,int b,int e,int i,int val)
{
    if(b>i || e<i) return;
    if(b==e && b == i){
        seg[node]=val;
        return;
    }
    update(node*2,b,mid,i,val);
    update(node*2+1,mid+1,e,i,val);
    seg[node]=seg[node*2]+seg[node*2+1];
}

int main()
{
    int T, c = 1, beg, endi, id, n, q;
    cin >> T;
    while(T--)
    {
        printf("Case %d:\n", c++);
        memset(arr,0,sizeof(arr));
        memset(seg,0,sizeof(seg));
        scanf("%d %d", &n, &q);
        for ( int i = 1; i <= n; i++ )
            scanf("%lld", &arr[i]);
        int m = 2*n;
        build(1, 1, m+1);
        getchar();
        while(q--)
        {
            char que;
            scanf("%c", &que);
            if ( que == 'c' )
            {
                int x = 0;
                scanf("%d", &id);
                int beg = 1, end_ = n, middle;
                while ( beg <= end_ )
                {
                    middle = (beg+end_)/2;
                    long long int y = query(1,1,m+1,1,middle);
                    if ( y >= id )
                    {
                        end_ = middle-1;
                        x = middle;
                    }
                    else
                        beg = middle+1;
                }
                if ( x == 0 )
                    printf("none\n");
                else
                {
                    printf("%lld\n", arr[x]);
                    update(1,1,m+1,x,0);
                }

            }
            else
            {
                scanf("%d", &id);
                n++;
                arr[n] = id;
                update(1,1,m+1,n,1);
            }

            getchar();
        }

    }
}
