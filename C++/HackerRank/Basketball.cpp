#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int games, low = 0, high = 0;
    cin >> games;
    int score[games];
    for ( int i = 0; i < games; i++ )
    {
        cin >> score[i];
    }
    int low_score = score[0], high_score = score[0];
    for ( int i = 1; i < games; i++ )
    {
        if ( score[i] > high_score )
        {
            high++;
            high_score = score[i];
        }
        else if (score[i] < low_score )
        {
            low++;
            low_score = score[i];
        }
    }
    cout << high << " " << low << endl;
    return 0;
}
