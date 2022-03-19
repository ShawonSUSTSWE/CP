#include<stdio.h>
int main()
{
    int i, j, k, n, x, carry;
    int arr[5000];
    while(scanf("%d", &n) != EOF)
    {
        if ( n == 0)
            break;
        int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
        arr[0] = 1;
        k = 1;
        carry =0;
        for(i=1; i<=n; ++i)
        {
            for(j=0; j<k ; j++)
            {
                x = arr[j]*i + carry;
                arr[j]= x % 10;
                carry = x/10;
            }
            for(; carry>0 ; k++)
            {
                arr[k] = carry % 10;
                carry = carry / 10;
            }
        }
            for(i=k-1; i>=0; i--)
            {
                if (arr[i] == 0)
                    count0++;
                else if (arr[i] == 1)
                    count1++;
                else if (arr[i] == 2)
                    count2++;
                else if (arr[i] == 3)
                    count3++;
                else if (arr[i] == 4)
                    count4++;
                else if (arr[i] == 5)
                    count5++;
                else if (arr[i] == 6)
                    count6++;
                else if (arr[i] == 7)
                    count7++;
                else if (arr[i] == 8)
                    count8++;
                else if (arr[i] == 9)
                    count9++;
            }
            printf("%d! --\n",n);
            printf("(0)%5d   (1)%5d   (2)%5d   (3)%5d   (4)%5d   \n(5)%5d   (6)%5d   (7)%5d   (8)%5d   (9)%5d   \n", count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
    }
    return 0;
}
