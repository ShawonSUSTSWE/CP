#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    cin >> n;
    vector <int> quasi;
    while(n)
    {
        int N = n, m = 0, t = 1;
        while(N)
        {
            if(N%10!= 0) m += t;
            N /= 10;
            t *= 10;
        }
        quasi.push_back(m);
        n = n-m;
    }
    cout << quasi.size() << endl;
    for ( int i = 0; i < quasi.size(); i++ )
        cout << quasi[i] << " ";
    cout << endl;
    return 0;
}
