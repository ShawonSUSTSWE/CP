#include<bits/stdc++.h>

using namespace std;

int power[9];

int main ()

{
    while(scanf("%d", &power[8]) == 1 )
    {
        for ( int i = 7; i >= 0; i-- )
        {
            scanf("%d", &power[i]);
        }
        int pos = 8;
        while(!power[pos] && pos >= 0 ) pos--;
        if (pos == -1) cout << 0;
        bool first = true;
        for ( int i = pos; i >= 0; i-- )
        {
            if(power[i])
            {
                if(!first)
                {
                    printf(" ");
                    if ( power[i] > 0 ) printf("+");
                    else printf("-");
                    printf(" ");
                }
                else
                {
                    if(power[i]<0)
                        printf("-");
                    first = false;
                }
                if(i)
                {
                    if (abs(power[i]) > 1)
                    {
                        printf("%d", abs(power[i]));
                    }
                    printf("x");
                    if ( i > 1 )
                        printf("^%d", i);
                }
                else
                    printf("%d", abs(power[i]));
            }

        }
        printf("\n");
    }
}
