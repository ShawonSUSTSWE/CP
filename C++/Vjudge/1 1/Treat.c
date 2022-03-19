#include<stdio.h>

int main()

{
    int i, event, reason[1002], balance, j = 1;
    while(1)
    {
        balance = 0;
        scanf("%d", &event);
        if ( event == 0 )
        {
            break;
        }
        for ( i = 0; i < event; i++ )
        {
            scanf("%d", &reason[i]);
            if ( reason[i] != 0 )
            {
                balance++;
            }
            else
            {
                balance--;
            }
        }
        printf("Case %d: %d\n", j, balance);
        j++;
    }
    return 0;
}
