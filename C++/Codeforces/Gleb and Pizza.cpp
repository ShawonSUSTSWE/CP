#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    if (n%2)
    {
        cout << "-1\n";
        return 0;
    }
    else
    {
        for ( int i = 0; i < n; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                for ( int k = 0; k < n; k++ )
                {
                    if ( (k/2)%2 == (j/2) % 2 == (i % 2 == 0))
                        cout << "b";
                    else
                        cout << "w";
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}
