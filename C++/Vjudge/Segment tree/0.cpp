#include<bits/stdc++.h>

using namespace std;

int x1[140000], x2[140000], y1[140000], y2[140000];
int area1[140000], area2[140000], area3[140000], area4[140000];

int main ()

{
    int n;
    cin >> n;
    for ( int i = 0; i < n; ++i )
    {
        scanf("%d %d %d %d",&x1[i], &y1[i], &x2[i], &y2[i]);
        area1[i] = x1[i];
        area2[i] = y1[i];
        area3[i] = x2[i];
        area4[i] = y2[i];

    }
    sort(area1, area1+n);
    sort(area2, area2+n);
    sort(area3, area3+n);
    sort(area4, area4+n);
    for ( int i = 0; i < n; i++ )
    {
        int ext1 = area1[n-1], ext2 = area2[n-1], ext3 = area3[0], ext4 = area4[0];
        if ( x1[i] == ext1 ) ext1 = area1[n-2];
        if ( y1[i] == ext2 ) ext2 = area2[n-2];
        if ( x2[i] == ext3 ) ext3 = area3[1];
        if ( y2[i] == ext4 ) ext4 = area4[1];
        if ( ext1 <= ext3 && ext2 <= ext4 )
        {
            printf("%d %d\n", ext1, ext2);
            return 0;
        }
    }
}
