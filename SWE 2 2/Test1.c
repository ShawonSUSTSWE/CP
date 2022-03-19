#include<stdio.h>

int main()

{
    int N, i, maximum = 0, minimum = 99999999, num;
    scanf("%d", &N);
    for ( int i = 1; i <= N; i++ )
    {
        scanf("%d", &num);
        if(num >= maximum)
        {
           maximum = num;
        }
        if ( num <= minimum )
        {
           minimum = num;
        }
    }
    printf("%d\n", maximum-minimum);
}
