#include<bits/stdc++.h>
#define ll long long

using namespace std;

int num[105];
vector <int> card;

int main ()

{
    int n, k;
    cin >> n;
    while(n--)
    {
        cin >> k;
        if (!num[k])
            card.push_back(k);
        num[k]++;
    }
    if ( card.size() != 2 )
    {
        cout << "NO\n";
    }
    else
    {
        if ( num[card[0]] == num[card[1]] )
        {
            cout << "YES\n";
            cout << card[0] << " " << card[1] << endl;
        }
        else
            cout << "NO\n";
    }
}
