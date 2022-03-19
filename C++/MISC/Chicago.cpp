#include<bits/stdc++.h>

using namespace std;

int main ()

{
    double road, intersection;
    double a, b, p;
    int position;
    cin >> road >> intersection;
    double way[int(road)+1][int(road)+1][1];
    for ( double i = 0; i < intersection; i++ )
    {
        cin >> a >> b >> p;
        way[int(a)][int(b)][0] = p;
        way[int(b)][int(a)][0] = p;
    }
    bool visit[int(road)+1];
    for ( int i = 0; i < road+2; i++ )
        visit[i] = false;
    visit[1] = true;
    stack <double> pos;
    pos.push(1);
    while( pos.top() != road )
    {
        i = pos.top()
        double maximum = 0;
        for ( int j = 1; j <= road; j++ )
        {
            if ( maximum < way[i][j][0] )
            {
                maximum == way[i][j][0];
                position = j;
            }
        }
        pos.push(position);
    }


}
