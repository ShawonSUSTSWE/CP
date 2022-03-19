#include<bits/stdc++.h>

using namespace std;

int main()
{
    string student;
    int T, n, ans = 0, cnt = 0;
    cin >> T;
    while(T--)
    {
        ans = 0;
        cin >> n >> student;
        for ( int i = 0; i < student.length(); i++ )
        {
            cnt = 0;
            if ( student[i] == 'A' )
            {
                i++;
                for ( ; i < student.length(); i++ )
                {
                    if ( student[i] == 'A' ) break;
                    cnt++;
                }
                ans = max(ans,cnt);
                i--;
            }
        }
        cout << ans << endl;
    }
}
