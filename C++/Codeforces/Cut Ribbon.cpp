#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, len[3], ans, once = 0, solved = 0;
    cin >> n;
    vector <int> answer;
    for ( int i = 0; i < 3; i++ )
    {
        cin >> len[i];
    }
    sort(len, len+3);
    int temp = n;
    if ( temp % len[0] == 0 )
    {
        ans = temp/len[0];
        solved = 1;
        cout << ans << endl;
        return 0;
    }
    else
    {
        while ( temp > 1 )
        {
            temp -= len[1];
            once++;
            if ( temp % len[0] == 0 && temp > 1 )
            {
                ans = (temp/len[0]) + once;
                answer.push_back(ans);
            }
        }
        temp = n;
        once = 0;
    }
    if ( solved == 0 )
    {
        while ( temp > 1 )
        {
            temp -= len[2];
            once++;
            if ( temp % len[0] == 0 && temp > 1 )
            {
                ans = (temp/len[0]) + once;
                answer.push_back(ans);
            }
        }
        temp = n;
        once = 0;
    }
    if ( solved == 0 )
    {
        if ( temp % len[1] == 0 )
        {
            ans = temp/len[1] ;
            answer.push_back(ans);
        }
        else
        {
            while ( temp > 1 )
            {
                temp -= len[2];
                once++;
                if ( temp % len[1] == 0 )
                {
                    ans = (temp/len[0]) + once;
                    answer.push_back(ans);
                }
            }
            temp = n;
            once = 0;
        }
    }
    if ( solved == 0 )
    {
        while ( temp > 1 )
        {
            temp -= len[2];
            once++;
            if ( temp % len[0] == 0 && temp > 1 )
            {
                ans = (temp/len[0]) + once;
                answer.push_back(ans);
            }
            temp -= len[1];
            once++;
            if ( temp % len[0] == 0 && temp > 1 )
            {
                ans = (temp/len[0]) + once;
                answer.push_back(ans);
            }
        }
        temp = n;
        once = 0;
    }
    if ( solved == 0 )
    {
        while ( temp > 1 )
        {
            temp -= len[1];
            once++;
            if ( temp % len[0] == 0 && temp > 1 )
            {
                ans = (temp/len[0]) + once;
                answer.push_back(ans);
            }
            temp -= len[2];
            once++;
            if ( temp % len[0] == 0 && temp > 1 )
            {
                ans = (temp/len[0]) + once;
                answer.push_back(ans);
            }
        }
        temp = n;
        once = 0;
    }
    ans = temp/len[2];
    answer.push_back(ans);
    sort(answer.begin(), answer.end());
    cout << answer[answer.size()-1] << endl;
    return 0;
}
