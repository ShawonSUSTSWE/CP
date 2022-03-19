#include<bits/stdc++.h>

using namespace std;

int  main ()

{
    int num, time;
    string line;
    cin >> num >> time;
    cin >> line;
    int pos[num];
    for ( int i = 0; i < num; i++ )
    {
        pos[i] = 0;
    }
    for ( int j = 0; j < time; j++ )
    {
        for ( int i = 0; i < line.length(); i++ )
        {
            if ( line[i] == 'B' && pos[i] != 1)
            {
                if ( line[i+1] == 'G')
                {
                    line[i] = 'G';
                    line[i+1] = 'B';
                    pos[i+1] = 1;
                }
            }
        }
        for ( int i = 0; i < num; i++ )
        {
            pos[i] = 0;
        }
    }
    cout << line << endl;
    return 0;
}
