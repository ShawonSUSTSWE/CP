#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int n;
    cin >> n;
    int num[n+1], sum = 0, t = 0;
    vector<int> times;
    for  ( int i = 1; i <= n; i++ )
    {
        cin >> num[i];
        sum += num[i];
        if ( (sum > (100*i)) || ( sum >= 100*i && i == 1))
        {
            t++;
        }
        else
        {
            times.push_back(t);
            t = 0;
        }
    }
    if(t)
        times.push_back(t);
    sort(times.begin(), times.end());
    cout << times[times.size()-1] << endl;
}
