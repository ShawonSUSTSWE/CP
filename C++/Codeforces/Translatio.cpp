#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int year1, digit, num[10], is_distinct = 1;
    cin >> year1;
    int year = year1;
    for ( int  i= 0; i < 10; i++ )
        num[i] = 0;
    for ( int i = year1+1; i < 9050; i++)
    {
        is_distinct = 1;
        year = i;
        while ( i != 0 )
        {
            digit = i % 10;
            if ( num[digit] != 1)
                num[digit] = 1;
            else
            {
                is_distinct = 0;
                break;
            }
            i = i/10;
        }
        for ( int  j= 0; j < 10; j++ )
            num[j] = 0;
        i = year;
        if ( is_distinct == 1 )
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}
