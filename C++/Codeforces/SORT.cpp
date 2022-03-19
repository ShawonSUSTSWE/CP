#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // for (int i = 0; i < n; ++i)
        // {
        //     cout<<a[i];
        // }
        // cout<<endl;
        stack<int>s;
        int i;
        for (i = n - 1; i > n / 2; --i)
        {
            s.push(a[i]);
            s.push(a[n - i - 1]);
        }
        if (n % 2 == 0) {
            s.push(a[i]);
            s.push(a[n - i - 1]);

        }
        else
            s.push(a[i]);
        for (int i = 0; i < n; ++i)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    return 0;
}
