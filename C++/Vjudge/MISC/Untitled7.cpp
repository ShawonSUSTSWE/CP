#include <bits/stdc++.h>
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
using namespace std;

int main(){
    int a, b, n;
    while(sfff(a,b,n)==3){
    	int c = 0;
    	for (int i = 0;; ++i)
    	{
    		if (c==n)
    		{

    			break;
    		}
    		printf("fill A\n");
    		printf("pour A B\n");
    		c+=a;
    		if (c>b)
    		{
    			printf("empty B\n");
    		    printf("pour A B\n");
    		    c -= b;
    		}
    	}
    	printf("success\n");
    }
    return 0;
}
