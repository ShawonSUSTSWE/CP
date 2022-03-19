#include<stdio.h>

int main()

{
    unsigned long long int num1, num2, i, j = 1, ans[200000], back_num, maximum;
    while(scanf("%llu %llu", &num1, &num2)!= EOF)
    {
        maximum = 0;
        if ( num1 > num2 )
        {
            back_num = num1;
            num1 = num2;
            num2 = back_num;
        }
        for ( i = num1; i <= num2; i++ )
        {
            back_num = i;
            while ( i != 1 )
            {
                if ( i % 2 == 0 )
                {
                    i = i / 2;
                }
                else
                {
                    i = (3*i)+1;
                }
                j++;
            }
            i = back_num;
            if ( j > maximum )
            {
                maximum = j;
            }
            j = 1;
        }
        printf("%llu %llu %llu\n", num1, num2, maximum);
}
    return 0;
}
