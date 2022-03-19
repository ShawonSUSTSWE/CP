#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int student[n], chocolate = 0, empti = 0;
        for ( int i = 0; i < n; i++ )
        {
            scanf("%d", &student[i]);
            if ( student[i] == 0 )
                empti++;
            if ( i != 0 )
            {
                if ( student[i] % 2 == 0 && student[i] != 0 && student[i-1] % 2 != 0 )
                    chocolate++;
                else if ( student[i-1] % 2 == 0 && student[i-1] != 0 && student[i] % 2 != 0 )
                    chocolate++;
            }
        }


        cout << chocolate << endl;
    }
}
