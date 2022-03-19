#include<stdio.h>

int main ()


{
    int piles, juicy_worms_label, i, j;
    scanf("%d", &piles);
    int worms[piles];
    for ( i = 0; i < piles; i++ )
    {
        scanf("%d", &worms[i]);
        if ( i != 0 )
        {
            worms[i] += worms[i-1];
        }
    }
    scanf("%d", &juicy_worms_label);
    int juicy_worms[juicy_worms_label];
    for ( i = 0; i < juicy_worms_label; i++ )
    {
        scanf("%d", &juicy_worms[i]);
    }
    for ( i = 0; i < juicy_worms_label; i++ )
    {
        if ( worms[piles/4] >= juicy_worms[i])
            {
                for ( j = 0; j <= piles/4; j++ )
                {
                    if ( worms[j] >= juicy_worms[i] )
                    {
                        printf("%d", j+1);
                        break;
                    }
                }
            }
        else if ( worms[piles/2] >= juicy_worms[i] )
        {
            for ( j = piles/4; j <= piles/2; j++ )
            {
                if ( worms[j] >= juicy_worms[i] )
                    {
                        printf("%d", j+1);
                        break;
                    }
            }
        }
        else if ( worms[3*piles/4] >= juicy_worms[i] )
        {
            for ( j = piles/2; j <= 3*piles/4; j++ )
            {
                if ( worms[j] >= juicy_worms[i] )
                    {
                        printf("%d", j+1);
                        break;
                    }
            }
        }
        else
        {
            for ( j = 3*piles/4; j <= piles; j++ )
            {
                if ( worms[j] >= juicy_worms[i] )
                    {
                        printf("%d", j+1);
                        break;
                    }
            }
        }
    }
    return 0;
}
