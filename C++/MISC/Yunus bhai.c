#include<stdio.h>
int main()
{
    int i,j,k,r,c;

    for(k=0;k<3;k++)            //three times
    {
        printf("enter rows NO:");
        scanf("%d",&r);
        printf("enter columns NO:");
        scanf("%d",&c);
        int arr[r][c];
        for(i=0;i<r;i++)         // rows
        {
            for(j=0;j<c;j++)        // columns
            {
                printf("array elements of array[%d][%d]",i,j);
                scanf("%d",&arr[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}

