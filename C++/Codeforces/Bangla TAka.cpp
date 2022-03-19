#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int taka;
    int  j = 1;
    while(scanf("%lld", &taka) == 1 )
    {
        int i = 0, c = 0, money;
        if ( taka == 0 )
        {
            printf("%4d. 0\n", j++);
            continue;
        }
        stack <int> hishab;
        while(taka>0)
        {
            if ( i == 5 )
            {
                i = 0;
                c++;
            }
            if ( ( i == 1 && c == 0 ) || ( i == 0 && c == 1) )
            {
                money = taka % 10;
                taka /= 10;
            }
            else
            {
                money = taka % 100;
                taka /= 100;
            }
            hishab.push(money);
            i++;
        }
        printf("%4d.", j++);
        int k = hishab.size();
        int once = 1;
        while(k--)
        {
            if(i == 0 && c > 0 )
            {
                once = 1;
                i = 5;
                c--;
            }
            if ( hishab.top() == 0 )
                {
                    hishab.pop();
                    if ( ((i == 4 && c == 1) || (i == 5 && c == 0)) && once == 1 )
                    {
                        printf(" kuti");
                        once--;
                    }
                    else if ( ((i == 3 && c == 1) || (i == 4 && c == 0)) && once == 1 )
                    {
                        printf(" lakh");
                        once--;
                    }
                    else if ( ((i == 2 && c == 1) || (i == 3 && c == 0)) && once == 1 )
                    {
                        printf(" hajar");
                        once--;
                    }
                    else if ( ((i == 1 && c == 1) || (i == 2 && c == 0)) && once == 1 )
                    {
                        printf(" shata");
                        once--;
                    }
                }
            else
               {
                 printf(" %d", hishab.top());
                 hishab.pop();
                 if ( (i == 4 && c == 1) || (i == 5 && c == 0) )
                 {
                    printf(" kuti");
                 }
                else if ( (i == 3 && c == 1) || (i == 4 && c == 0) )
                {
                    printf(" lakh");
                }
                else if ( (i == 2 && c == 1) || (i == 3 && c == 0) )
                {
                    printf(" hajar");
                }
                else if ( (i == 1 && c == 1) || (i == 2 && c == 0) )
                {
                    printf(" shata");
                }
                once--;
              }
              i--;
        }
        printf("\n");

    }
}
