#include<bits/stdc++.h>

using namespace std;

int main ()

{
        int T, n;
        cin >> T;
        string num;
        bool pos;
        while(T--)
        {
                pos = false;
                cin >> n >> num;
                if ( num.length() < 11 )
                {
                        cout << "NO\n";
                        continue;
                }
                else
                {
                        for ( int i = 0; i <= num.length()-11; i++ )
                        {
                                if ( num[i] == '8' )
                                {
                                        pos = true;
                                        break;
                                }
                        }
                        if (pos) cout << "YES\n";
                        else cout << "NO\n";
                }
        }
}
