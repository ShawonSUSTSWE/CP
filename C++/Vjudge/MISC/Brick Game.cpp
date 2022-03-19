#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_of_players, test_case;
    cin >> test_case;
    for ( int k = 0; k < test_case; k++ )
    {
        cin >> num_of_players;
        int age[num_of_players];
        for ( int i = 0; i < num_of_players; i++ )
        {
            cin >> age[i];
        }
        sort(age, age+num_of_players);
        cout << "Case " << k+1 << ": " << age[num_of_players/2] << endl;
    }
    return 0;
}
