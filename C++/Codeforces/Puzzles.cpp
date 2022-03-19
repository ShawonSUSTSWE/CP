#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int student, puzzle, p, d;
    vector <int> piece;
    vector <int> diff;
    cin >> student >> puzzle;
    for ( int i = 0; i < puzzle; i++ )
    {
        cin >> p;
        piece.push_back(p);
    }
    sort ( piece.begin(), piece.end() );
    for ( int i = 0; i < puzzle-student+1; i++ )
    {
         d = piece[i+student-1]-piece[i];
         diff.push_back(d);
    }
    sort(diff.begin(), diff.end());
    cout << diff[0] << endl;
    return 0;
}
