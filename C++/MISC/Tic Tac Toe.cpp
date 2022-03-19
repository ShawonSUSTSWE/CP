#include<bits/stdc++.h>

using namespace std;


int matchX ( string input )

{
    bool m[8] = {0};
    int match = 0;
    //row match
    if ( input[0] == 'X' && input[1] == 'X' && input[2] == 'X' )
    {
        match++;
        m[0] = true;
    }
    if ( input[3] == 'X' && input[4] == 'X' && input[5] == 'X' )
    {
        match++;
        m[1] = true;
    }
    if ( input[6] == 'X' && input[7] == 'X' && input[8] == 'X' )
    {
        match++;
        m[2] = true;
    }

    //column match
    if ( input[0] == 'X' && input[3] == 'X' && input[6] == 'X' )
    {
        match++;
        m[3] = true;
    }
    if ( input[1] == 'X' && input[4] == 'X' && input[7] == 'X' )
    {
        match++;
        m[4] = true;
    }
    if ( input[2] == 'X' && input[5] == 'X' && input[8] == 'X' )
    {
        match++;
        m[5] = true;
    }

    //diagonal match
    if ( input[2] == 'X' && input[4] == 'X' && input[6] == 'X' )
    {
        match++;
        m[7] = true;
    }
    if ( input[0] == 'X' && input[4] == 'X' && input[8] == 'X' )
    {
        match++;
        m[6] = true;
    }
    if ( match > 1 )
    {
        if ( m[0] == true )
        {
            if ( m[0] == m[3] || m[0] == m[4] || m[0] == m[5] || m[0] == m[6] || m[0] == m[7] )
            match = 1;
        }
        else if ( m[1] == true )
        {
            if ( m[1] == m[3] || m[1] == m[4] || m[1] == m[5] || m[1] == m[6] || m[1] == m[7] )
                match = 1;
        }
        else if ( m[2] == true )
        {
            if ( m[2] == m[3] || m[2] == m[4] || m[2] == m[5] || m[2] == m[6] || m[2] == m[7] )
                match = 1;
        }
        else if ( m[3] == true )
        {
            if ( m[3] == m[6] || m[3] == m[7] )
                match = 1;
        }
        else if ( m[4] == true )
        {
            if ( m[4] == m[6] || m[4] == m[7] )
                match = 1;
        }
        else if ( m[5] == true )
        {
            if ( m[5] == m[6] || m[5] == m[7] )
                match = 1;
        }
        else if ( m[6] = true )
        {
            if ( m[7] == true )
                match = 1;
        }
    }

    return match;
}

int matchO ( string input )

{
    bool m[8] = {0};
    int match = 0;
    //row match
    if ( input[0] == 'O' && input[1] == 'O' && input[2] == 'O' )
    {
        match++;
        m[0] = true;
    }
    if ( input[3] == 'O' && input[4] == 'O' && input[5] == 'O' )
    {
        match++;
        m[1] = true;
    }
    if ( input[6] == 'O' && input[7] == 'O' && input[8] == 'O' )
    {
        match++;
        m[2] = true;
    }

    //column match
    if ( input[0] == 'O' && input[3] == 'O' && input[6] == 'O' )
    {
        match++;
        m[3] = true;
    }
    if ( input[1] == 'O' && input[4] == 'O' && input[7] == 'O' )
    {
        match++;
        m[4] = true;
    }
    if ( input[2] == 'O' && input[5] == 'O' && input[8] == 'O' )
    {
        match++;
        m[5] = true;
    }

    //diagonal match
    if ( input[2] == 'O' && input[4] == 'O' && input[6] == 'O' )
    {
        match++;
        m[7] = true;
    }
    if ( input[0] == 'O' && input[4] == 'O' && input[8] == 'O' )
    {
        match++;
        m[6] = true;
    }
    return match;
}

int main ()

{
    string input;
    while(1)
    {
        cin >> input;
        int cntX = 0, cntO = 0, cntdot = 0, X = 0, O = 0;
        if ( input[0] == 'e' )
            break;
        for ( int i = 0; i <= input.length(); i++ )
        {
            if ( input[i] == 'X' )
                cntX++;
            else if ( input[i] == 'O' )
                cntO++;
            else if ( input[i] == '.' )
                cntdot++;
        }
        if ( cntO > cntX )
        {
            cout << "invalid\n";
            continue;
        }
        if ( cntX > cntO+1 )
        {
            cout << "invalid\n";
            continue;
        }
        X = matchX(input);
        O = matchO(input);
        if ( O > 1 || X > 1 )
        {
            cout << "invalid\n";
            continue;
        }
        if ( X == O )
        {
            cout << "invalid\n";
            continue;
        }
        if ( O == 1 && cntX > cntO )
        {
            cout << "invalid\n";
            continue;
        }
        if ( X == 1 && cntX == cntO )
        {
            cout << "invalid\n";
            continue;
        }
        if ( X != 1 && O != 1 && cntX+cntO != 9 )
        {
            cout << "invalid\n";
            continue;
        }
        cout << "valid\n";
    }
    return 0;
}
