#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int arr[] ={ 2, 3,4, 1 , 3, 2};

void build(int node, int b, int e )

{
    if ( b == e )
    {
        seg[node] = arr[b];
        return;
    }
    int mid = ( b+e)/2;
    build(node*2, b, mid);
    build(node*2+1,mid+1,e);
    seg[node] = seg[node*2]+seg[node*2+1];
}

int query ( int node, int b, int e, int l, int r )
{
        if ( b > r || e < l )
            return 0;
        if  ( b >= l && e <= r )
            return seg[node];
        int mid = (b+e)/2;
        int left_sum = query(2*node,b,mid,l,r);
        int right_sum = query(2*node+1,mid+1,e,l,r);
        return left_sum+right_sum;
}

int main ()

{

}
