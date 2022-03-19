#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int dest, C_jug[2], jug[2];
    while ( scanf("%d %d %d", &C_jug[0], &C_jug[1], &dest) != EOF )
    {
        int c;
        jug[0] = 0, jug[1] = 0;
        if ( C_jug[0] > C_jug[1] )
        {
            c = 1;
        }
        else
            c = 2;
        sort(C_jug, C_jug+2);
        while ( jug[1] != dest )
        {
            if ( jug[0] == 0 )
            {
                if ( c == 1 )
                {
                    cout << "fill B\n";
                }
                else
                {
                    cout << "fill A\n";
                }
                jug[0] += C_jug[0];
            }
            if ( c == 1 )
            {
                cout << "pour B A\n";
            }
            else
            {
                cout << "pour A B\n";
            }
            jug[1] += jug[0];
            jug[0] = 0;
            if ( jug[1] > C_jug[1] )
            {
                jug[0] = jug[1]-C_jug[1];
                jug[1] = C_jug[1];
            }
            if ( jug[1] == C_jug[1] && jug[1] != dest )
            {
                if ( c == 1 )
                {
                    cout << "empty A\n";
                }
                else
                {
                    cout << "empty B\n";
                }
                jug[1] = 0;
            }
        }
        cout << "success\n";
    }
}
