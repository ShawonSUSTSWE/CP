#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()

{
    int T;
    long long int a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        if (a%b)
            cout << b-(a%b) << endl;
        else
            cout << "0\n";
    }
}
