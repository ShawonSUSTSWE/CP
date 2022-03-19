#include<bits/stdc++.h>

using namespace std;

int main()

{
    int row, column, start;
    vector <int> pathx, pathy;
    while(1)
    {
        //cr = current row , cc = current column
        int cr, cc, possible = 1, step = 0;
        cin >> row >> column >> start;
        if ( row == 0 )
            break;
        char area[row+2][column+2];
        for ( int i = 1; i <= row; i++ )
        {
            scanf("%s", &area[i]);
        }
        bool visited[row+1][column+1] = {false};
        cc = start-1, cr = 1;
        while ( cr != 0 || cr != row+1 || cc != column+1 )
        {
            if ( cc == 0 && area[cr][cc] == 'W' )
            {
                visited[cr][cc] = true;
                step++;
                break;
            }
            pathx.push_back(cc);
            pathy.push_back(cr);
            cout << cc << " " << cr << endl;
            if ( visited[cr][cc]  == true )
            {
                possible = 0;
                break;
            }
            visited[cr][cc] = true;
            if ( area[cr][cc] == 'N' )
            {
                cr--;
            }
            else if ( area[cr][cc] == 'S' )
            {
                cr++;
            }
            else if ( area[cr][cc] == 'W' )
            {
                cc--;
            }
            else if ( area[cr][cc] == 'E' )
            {
                cc++;
            }
            step++;
        }
        for ( int i = 1; i <= row; i++ )
        {
            for ( int j = 0; j < column; j++ )
                cout << visited[i][j];
            cout << endl;
        }
        if ( possible == 1 )
        {
            cout << step << " step(s) to exit" << endl;
        }
        if ( possible == 0 )
        {
            int step2 = 0;
            for ( int i = 0, j = 0; i < pathx.size(), j  < pathy.size(); i++, j++)
            {
                if ( pathy[i] == cr && pathx[i] == cc )
                {
                    break;
                }
                step2++;
            }
            cout << step2 << " step(s) before a loop of " << pathx.size()+1-step << " step(s)\n";
        }
    }
    return 0;
}
