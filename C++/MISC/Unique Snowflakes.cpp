#include<bits/stdc++.h>
#define ULL unsigned long long int

using namespace std;

int main()

{
    ULL test_case;
    cin >> test_case;
    for ( ULL k = 1; k <= test_case; k++ )
    {
        ULL num_of_num, input, lenteam = 0, counter = 1;
        cin >> num_of_num;
        vector <ULL> num(1000000001), team;
        for ( ULL i = 0; i < num_of_num; i++ )
        {
            cin >> input;
            if(num[input] == 0)
            {
                num[input] = 1;
                lenteam++;
            }
            else
            {
                team.push_back(lenteam);
                lenteam = 1;
                num = {0};
                num[input] = 1;
                counter++;
            }
        }
        sort(team.begin(), team.end(), greater<ULL>());
        cout << team[0] << endl;
    }
}
