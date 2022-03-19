#include<bits/stdc++.h>

using namespace std;

int boy[110], girl[110];

int main()

{
    int n_boy, n_girl, ans = 0;
    cin >> n_boy;
    int boydance[n_boy];
    for ( int i = 0; i < n_boy; i++ )
    {
        cin >> boydance[i];
        boy[boydance[i]]++;
    }
    cin >> n_girl;
    int girldance[n_girl];
    for ( int i = 0; i < n_girl; i++ )
    {
        cin >> girldance[i];
        girl[girldance[i]]++;
    }
    sort(boydance, boydance+n_boy);
    sort(girldance, girldance+n_girl);
    if ( n_boy <= n_girl )
    {
        for ( int i = 0; i < n_boy; i++ )
        {
            if ( girl[boydance[i]-1] > 0 )
            {
                ans++;
                girl[boydance[i]-1]--;
            }
            else if ( girl[boydance[i]] > 0 )
            {
                ans++;
                girl[boydance[i]]--;
            }
            else if ( girl[boydance[i]+1] > 0 )
            {
                ans++;
                girl[boydance[i]+1]--;
            }
        }
    }
    else
    {
        for ( int i = 0; i < n_girl; i++ )
        {
            if ( boy[girldance[i]-1] > 0 )
            {
                ans++;
                boy[girldance[i]-1]--;
            }
            else if ( boy[girldance[i]] > 0 )
            {
                ans++;
                boy[girldance[i]]--;
            }
            else if ( boy[girldance[i]+1] > 0 )
            {
                ans++;
                boy[girldance[i]+1]--;
            }
        }
    }
    cout << ans << endl;
}
