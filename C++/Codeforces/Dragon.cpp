#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, m;
    cin >> n >> m;
    string m1, m2;
    map <string,pair<string,int>> chart;
    while(m--)
    {
        cin >> m1 >> m2;
        if (m1.length() > m2.length())
        {
            chart[m1].first = m2;
            chart[m1].second = 2;
            chart[m2].first = m1;
            chart[m2].second = 1;
        }
        else
        {
            chart[m1].first = m2;
            chart[m1].second = 1;
            chart[m2].first = m1;
            chart[m2].second = 2;
        }
    }
    while(n--)
    {
        cin >> m1;
        if (chart[m1].second == 1)
        {
            cout << m1 << " ";
        }
        else
        {
            cout << chart[m1].first << " ";
        }
    }
    cout << endl;
}
