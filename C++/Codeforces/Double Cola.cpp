#include<bits/stdc++.h>

using namespace std;

int process(int num)

{
    while(num>5)
    {
        num = num/2-2;
    }
    return num;
}

int main ()

{
    int num;
    cin >> num;
    int ans = process(num);
    if ( ans == 1 )
        cout << "Sheldon\n";
    else if ( ans == 2 )
        cout << "Leonard\n";
    else if ( ans == 3 )
        cout << "Penny\n";
    else if ( ans == 4 )
        cout << "Rajesh\n";
    else if ( ans == 5 )
        cout << "Howard\n";
}
