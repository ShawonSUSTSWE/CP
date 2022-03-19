#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int wordsize, test_case;
    cin >> test_case;
    for ( int k = 0; k < test_case; k++ )
    {
        cin >> wordsize;
        int count01 = 0, count02 = 0, count11 = 0, count12 = 0;
        string str1, str2;
        cin >> str1;
        cin >> str2;
        for ( int i = 0; i < wordsize; i++ )
        {
            if ( str1[i] == '0' )
            {
                count01++;
            }
            if ( str1[i] == '1' )
            {
                count11++;
            }
            if ( str2[i] == '1' )
            {
                count12++;
            }
            if ( str2[i] == '0' )
            {
                count02++;
            }
        }
        if ( count01 == count02 && count11 == count12 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO\n";
        }

    }
    return 0;
}
