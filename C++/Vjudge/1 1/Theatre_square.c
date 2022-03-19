#include<stdio.h>

int main ()

{
    long long int length, width, square, ans = 0, l, w, s;
    scanf("%lld %lld %lld", &length, &width, &square);
    if ( length % square != 0 && width % square != 0 )
    {
        l = (length / square) + 1;
        w = (width / square) + 1;
        ans = l*w;

    }
    else if ( length % square != 0 && width % square == 0 )
    {
            l = (length / square) + 1;
            ans = (width / square) * l;
    }
    else if ( length % square == 0 && width % square != 0 )
    {
            l = (width / square) + 1;
            ans = (length / square) * l;
    }
    else
    {
        ans = (length / square) * (width / square);
    }
    printf("%lld\n", ans);
    return 0;
}
