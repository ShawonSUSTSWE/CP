#include<stdio.h>

int main ()

{
    int T;
    int i, j;
    scanf("%d", &T);
    while(T--)
    {
        int brick[10][10];
        for ( i = 1; i <= 9; i += 2 )
        {
            for ( j = 1; j <= i; j += 2 )
                scanf("%d", &brick[i][j]);
        }
        int temp1, temp2, temp3;
        for ( i = 9; i > 1; i -= 2 )
        {
            for ( j = 1; j < i; j += 2 )
            {
                temp1 = brick[i][j];
                temp2 = brick[i][j+2];
                temp3 = brick[i-2][j];
                brick[i][j+1] = (temp3-(temp1+temp2))/2;
                brick[i-1][j] = brick[i][j] + brick[i][j+1];
                brick[i-1][j+1] = brick[i][j+1] + brick[i][j+2];
            }
        }
        for ( i = 1; i <= 9; i++, puts("") )
        {
            for ( j = 1; j <= i; j++ )
            {
                if ( j!= 1) putchar(' ');
                printf("%d", brick[i][j]);
            }
        }
    }
}
