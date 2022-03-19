#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string time12;
    int time20, time4, time24;
    cin >> time12;
    for ( int i = 0; i < time12.length(); i++ )
    {
        if ( time12[time12.length()-2] == 'A' )
        {
            if ( time12[0] == '1' && time12[1] == '2' )
            {
                time12[0] = '0';
                time12[1] = '0';
                break;
            }
        }
        else
        {
            cout << "1" << endl;
            if ( time12[0] != '1' || time12[1] != '2' )
            {
                time20 = (time12[0] - '0');
                cout << time20 << endl;
                time4 = (time12[1] - '0');
                cout << time4 << endl;
                time24 = 12 + ( 10* time20 + time4 );
                cout << time24 << endl;
                time12[0] = (time24 / 10) + '0';
                time12[1] = (time24 % 10) + '0';
                break;
            }
        }

    }
    for ( int i = 0; i < time12.length()-2; i++ )
    {
        cout << time12[i];
    }
    return 0;
}
