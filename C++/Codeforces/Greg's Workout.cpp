#include<bits/stdc++.h>

using namespace std;

int d[210];

int main()
{
	int t, n, x, num[210], ans;
	cin >> t;
	while(t--)
	{
		cin >> n >> x;
		memset(d,0,sizeof(d));
		for ( int i = 1; i <= n; i++ )
        {
            cin >> num[i];
            d[num[i]] = 1;
        }
        int k;
        for ( k = 1;d[k] != 0 || x > 0 ; k++ )
        {
            if ( d[k] == 0 )
                x--;
        }
        cout << k-1 << endl;
	}
}
