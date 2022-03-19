#include<stdio.h>

int main ()

{
    int cars, time, i, arr_cars[102];
    scanf("%d %d", &cars, &time);
    for ( i = 0; i < time; i++ )
    {
        scanf("%d", &arr_cars[i]);
        if( i != 0 )
        {
            if ( arr_cars[i-1]-cars > 0 )
            {
            arr_cars[i] += arr_cars[i-1] - cars;
            }
        }
    }

    if ( arr_cars[time-1]-cars > 0 )
    {
        printf("%d\n", arr_cars[time-1]-cars);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
