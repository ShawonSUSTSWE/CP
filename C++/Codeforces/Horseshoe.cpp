#include<bits/stdc++.h>

using namespace std;

int main ()

{
    unsigned long long int shoe[4], counter = 0, flag = 1;
    for ( int i = 0; i < 4; i++ )
        cin >> shoe[i];
    for ( int i = 0; i < 3; i++ )
    {
        vector <unsigned long long int> color;
        for ( int j = i + 1; j < 4; j++ )
        {
            if ( shoe[i] == shoe[j] && color.size() == 0)
                {
                    counter++;
                    color.push_back(shoe[i]);
                }
            else if ( shoe[i] == shoe[j] )
            {
                for ( int k = 0; k < color.size(); k++ )
                {
                    if ( shoe[i] == color[k] )
                    {
                        flag = 0;
                        break;
                    }
                }
                if ( flag == 1 )
                    counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
