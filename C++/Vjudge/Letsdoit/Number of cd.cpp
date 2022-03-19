#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int gcd ( int num1, int num2 )

{
    if ( num1 == 0 )
        return num2;
    return gcd(num2%num1, num1);

}


int main()

{
    int T, k = 1;
    int num1, num2, temp;
    for ( scanf("%d", &T); k <= T; k++ )
    {
        scanf("%d %d", &num1, &num2);
        temp = gcd(num1, num2);
        int cd = 0;
        for ( int i = 1; i <= sqrt(temp); i++ )
        {
            if ( temp % i == 0 )
            {
                if ( temp/i == i )
                    cd += 1;
                else
                    cd += 2;
            }
        }
        printf("%d\n", cd);
    }
    return 0;
}
