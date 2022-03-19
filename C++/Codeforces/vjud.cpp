#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll n, d, a, b, x, y, sum = 0;
	cin >> n >> d >> a >> b;
	vector<pair<int,int>>client;
	vector<int>serial;
	for ( int i = 1; i <=n; i++ )
    {
        cin >> x >> y;
        client.push_back(make_pair(a*x+b*y,i));
    }
    sort(client.begin(),client.end());
    for ( int i = 0; i < client.size(); i++ )
    {
        sum += client[i].first;
        if ( sum <= d )
        {
            serial.push_back(client[i].second);
        }
        else
            break;
    }
    cout << serial.size() << endl;
    for ( int i = 0; i < serial.size(); i++ )
        cout << serial[i] << " ";
    cout << endl;
}
