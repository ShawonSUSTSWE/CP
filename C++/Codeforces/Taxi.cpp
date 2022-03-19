#include<bits/stdc++.h>

using namespace std;

int main()

{
    int taxi = 0, num_group, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    cin >> num_group;
    int group[num_group];
    for ( int i = 0; i < num_group; i++ )
    {
        cin >> group[i];
        if ( group[i] == 1 )
        {
            count1++;
        }
        else if ( group[i] == 2 )
        {
            count2++;
        }
        else if ( group[i] == 3 )
        {
            count3++;
        }
        else if ( group[i] == 4 )
        {
            count4++;
        }
    }
    taxi += count3 + count4 + (count2/2);
    if ( count1 >= count3 )
    {
        if ( ((count1-count3) + ((count2 % 2)+1))  % 4 == 0 && count2 % 2 != 0 )
        {
            taxi += ((count1-count3) + ((count2 % 2)+1)) / 4;
        }
        else if ( ((count1-count3) + ((count2 % 2)+1)) % 4 != 0 && count2 % 2 != 0 )
        {
            taxi += ((count1-count3) + ((count2 % 2)+1)) / 4;
            taxi++;
        }
        else if ( ((count1-count3) + ((count2 % 2)))  % 4 == 0 && count2 % 2 == 0 )
        {
            taxi += (count1-count3) / 4;
        }
        else if ( ((count1-count3) + ((count2 % 2)))  % 4 != 0 && count2 % 2 == 0 )
        {
            taxi += (count1-count3) / 4;
            taxi++;
        }
    }
    else
    {
        taxi += count2%2;
    }
    cout << taxi << endl;
    return 0;
}
