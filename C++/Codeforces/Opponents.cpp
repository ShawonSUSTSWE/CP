#include<bits/stdc++.h>

using namespace std;

vector <int> answer;

int main ()

{
    int n, d, ans = 0;
    cin >> n >> d;
    string day;
    for ( int i = 0; i < d; i++ )
    {
        int found = 0;
        cin >> day;
        for ( int j = 0; j < day.length(); j++ )
        {
            if(day[j] == '0')
            {
                found = 1;
                ans++;
                break;
            }
        }
        if(!found || i == d-1)
        {
            answer.push_back(ans);
            ans = 0;
        }
    }
    sort(answer.begin(), answer.end());
    cout << answer[answer.size()-1] << endl;
}
