#include<bits/stdc++.h>

using namespace std;

int main()

{
    int flag = 0, num[100], n, loc, minimum;
    cin >> n;
    for ( int i = 1; i <= n; i++ )
    {
        cin >> num[i];
    }
    for ( int i = 1; i < n; i++ )
    {
        flag = 0;
        minimum = num[i];
        for ( int k = i+1; k <= n; k++ )
        {
            if ( minimum > num[k])
            {
                flag = 1;
                minimum = num[k];
                loc = k;
            }
        }
        if ( flag == 1 )
        {
            num[loc] = num[i];
            num[i] = minimum;
            loc = i;
        }
        for ( int i = 1; i <= n; i++ )
        {
          cout << num[i] << " ";
        }
        cout << endl << "I = " << i << " and Location = " << loc << endl;
    }
    return 0;
}
