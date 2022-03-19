#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int i = 1;
    while(i>=1)
    {
        i = i << 1;
        int j = i >> 1;
        cout << i << " " << j << endl;
    }
}
