#include<bits/stdc++.h>

int boxes[10001];

using namespace std;

int main ()

{
    int cubes, i;
    cin >> cubes;
    for ( i = 1; ;i++)
    {
        if ( i == 1 )
            boxes[i] = 1;
        else
            boxes[i] = i+boxes[i-1];
        cubes -= boxes[i];
        if (cubes < 0 )
        {
            cout << i-1 << endl;
            break;
        }
    }
}
