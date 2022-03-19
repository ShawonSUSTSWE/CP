#include<bits/stdc++.h>

using namespace std;

int main ()

{
    double f0 = sqrt(2)+sqrt(3)+sqrt(6);
    double f[5];
    for ( int i = 0; i < 5; i++ )
    {
        f[i] = f0;
        f0 = (f0*f0-5)/(2*f0+4);
    }
    char num[5000];
    while(scanf("%s",&num) == 1)
    {
        int n = strlen(num), x;
        if (n < 8) {
            sscanf(num, "%d", &x);
            if (x < 3)
                printf("%.10f\n", f[x], x);
            else
                printf("%.10f\n", f[4-x%2], 4-x%2);
        } else {
            char c = num[n-1]-'0';
            printf("%.10f\n", f[4-c%2], 4-c%2);
        }
    }
}
