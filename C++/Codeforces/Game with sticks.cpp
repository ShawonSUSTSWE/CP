#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int horizontal, vertical, i = 0;
    cin >> horizontal >> vertical;
    int node = horizontal * vertical;
    while (1)
    {
        if ( horizontal == 0 || vertical == 0 )
            break;
        horizontal--;
        vertical--;
        i++;
    }
    if ( i % 2 == 0 )
        cout << "Malvika\n";
    else
        cout << "Akshat\n";
    return 0;
}
