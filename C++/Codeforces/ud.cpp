#include <bits/stdc++.h>

using namespace std;

int main()

{
    int power[9], i, j;
    while(scanf("%d", &power[8]) == 1)
    {
        for(i = 7; i >= 0; i--)
            scanf("%d", &power[i]);
        j = 8;
        while(!power[j] && j >= 0)    j--;
        int flag = 0;
        if(j == -1)
            putchar('0');
        for(i = j; i >= 0; i--) {
            if(power[i]) {
                if(flag) {
                    putchar(' ');
                    if(power[i] > 0)
                        putchar('+');
                    else
                        putchar('-');
                    putchar(' ');
                } else {
                    if(power[i] < 0)
                        putchar('-');
                    flag = 1;
                }
                if(i) {
                    if(abs(power[i]) != 1)
                        printf("%d", abs(power[i]));
                    putchar('x');
                    if(i != 1)
                        printf("^%d", i);
                }
                else {
                    printf("%d", abs(power[i]));
                }
            }
        }
        puts("");
    }
    return 0;
}
