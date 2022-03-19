#include<stdio.h>

int main ()

{
    unsigned long int up_line, low_line, point, i = 1;
    while(1)
    {
        scanf("%lu %lu", &up_line, &low_line);
        if ( up_line == 0 && low_line == 0 )
        {
            break;
        }
        point = up_line*(up_line-1)*low_line*(low_line-1)/4;
        printf("Case %lu: %lu\n", i, point);
        i++;
    }
    return 0;
}
