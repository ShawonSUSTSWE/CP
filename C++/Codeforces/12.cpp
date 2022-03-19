#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 8000000
bool *generate()
{
    int i;
    bool *prime=(bool *)malloc(size*sizeof(bool));
    int j;
    int temp1,temp2;
    for(i=2;i<size;i++)
        *(prime+i)=1;
    *(prime+0)=0;
    *(prime+1)=0;
    i=2;
    while(i*i<size)
    {
        if(*(prime+i))
        {
            for(j=i*i;j<size;j+=i)
                *(prime+j)=0;
            temp1=i;
            temp2=0;
            while(temp1>0)
            {
                temp2=temp2*10+temp1%10;
                temp1/=10;
            }
            if(temp2!=i)
                *(prime+i)=0;
        }
        i++;
    }
    return prime;
}
int main()
{
    bool * prime=generate();
    int n,i;
    scanf("%d",&n);
    for(i=n;i<size;i++)
        if(*(prime+i))
        {
            printf("%d",i);
            break;
        }
    return 0;
}
