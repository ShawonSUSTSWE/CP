#include <bits/stdc++.h>

using namespace std;

char field[52][52];

int main ()
{
	int n, m, checker;
	cin >> n >> m;
	for ( int i=1; i<=n; i++)
        for ( int j=1; j<=m; j++)
            cin >> field[i][j];

	for (int i=1; i<=n; i++)
    {
        for ( int j=1; j<=m; j++)
        {
            if (field[i][j]!='*')
            {
                checker=0;
                if (field[i][j]==field[i+1][j]) checker++;
                if (field[i][j]==field[i][j+1]) checker++;
                if (field[i][j]==field[i-1][j]) checker++;
                if (field[i][j]==field[i][j-1]) checker++;

                if (checker<2) field[i][j]='*',i=1,j=0;
            }
         }
    }
    checker=0;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
           if (field[i][j]!='*') checker++;
        }
    }
    if (checker<=3) cout<<"No\n";
        else
            cout<<"Yes\n";
	return 0;
}
