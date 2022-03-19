#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int T, n, x, a, b, minimum, maximum;
    cin >> T;
    while(T--)
    {
        cin >> n >> x >> a >> b;
        minimum = min(a,b);
        maximum = max(a,b);
        while(x > 0 && minimum != 1)
            minimum--, x--;
        while(x > 0 && maximum != n)
            maximum++, x--;
        cout << maximum-minimum << endl;
    }
}
