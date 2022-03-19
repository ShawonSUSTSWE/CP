#include<stdio.h>

int main ()

{
    int ls, rs, time, time1, time2;
    scanf("%d %d", &ls, &rs);
    time1 = (rs*2) + 40;
    time2 = (39*2) + 40 + (ls-40)*2 + 1;
    if ( time1 >= time2 )
        printf("%d\n", time1);
    else
        printf("%d\n", time2);
    return 0;
}
