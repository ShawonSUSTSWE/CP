#include<bits/stdc++.h>

using namespace std;

int main ()

{
    unsigned long long int n, a, b, ans;
    cin >> n;
    while(n--)
    {
        ans = 0;
        cin >> a >> b;
        ans += (60-b);
        a++;
        ans += ((24-a)*60);
        cout << ans << endl;
    }
}
