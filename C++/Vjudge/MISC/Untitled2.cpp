#include<stdio.h>

int main ()

{
    int ls, rs, time, time1, time2;
    scanf("%d %d", &ls, &rs);
    if ( ls == 40 )
    {
        time = (rs*2) + ls;
        printf("%d\n", time);
        return 0;
    }
    time1 = (rs*2) + 40;
    time2 = (39*2) + 40 + (ls-40)*2 + 1;
    if ( time1 >= time2 )
        printf("%d\n", time1);
    else
        printf("%d\n", time2);
    return 0;
}
