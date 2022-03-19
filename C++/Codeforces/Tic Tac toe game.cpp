#include<bits/stdc++.h>

using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6' , '7', '8', '9'};

void start ()

{
    for ( int i = 0; i < 3; i++ )
    {
        for ( int j = 0; j < 3; j++ )
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void gameX ()

{
    char a;
    cout << "Please enter the position(X): "; cin >> a;
    for ( int i = 0; i < 3; i++ )
    {
        for ( int j = 0; j < 3; j++ )
        {
            if ( a == matrix[i][j] )
                matrix[i][j] = 'X';
        }
        cout << endl;
    }
}

void gameO()

{
    char a;
    cout << "Please enter the position(O): "; cin >> a;
    for ( int i = 0; i < 3; i++ )
    {
        for ( int j = 0; j < 3; j++ )
        {
            if ( a == matrix[i][j] )
                matrix[i][j] = 'O';
        }
        cout << endl;
    }
}

int main()

{
    cout << "\n\nTic Tac Toe\n\n\n\n";
    int cnt = 0, i = 9, win = 0;
    while(i > 0)
    {
        start();
        gameX();
        cnt++;
        i--;
        if ( (matrix[0][0] == matrix[0][1]) && (matrix[0][0] == matrix[0][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[1][0] == matrix[1][1]) && (matrix[1][0] == matrix[1][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[2][0] == matrix[2][1]) && (matrix[2][0] == matrix[2][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][0] == matrix[1][0]) && (matrix[0][0] == matrix[2][0]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][1] == matrix[1][1]) && (matrix[0][1] == matrix[2][1]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][2] == matrix[1][2]) && (matrix[0][2] == matrix[2][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][0] == matrix[1][1]) && (matrix[0][0] == matrix[2][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][2] == matrix[1][1]) && (matrix[0][2] == matrix[2][0]))
        {
            win = 1;
            break;
        }
        if ( i == 0 )
            break;
        start();
        gameO();
        cnt++;
        i--;
        if ( (matrix[0][0] == matrix[0][1]) && (matrix[0][0] == matrix[0][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[1][0] == matrix[1][1]) && (matrix[1][0] == matrix[1][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[2][0] == matrix[2][1]) && (matrix[2][0] == matrix[2][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][0] == matrix[1][0]) && (matrix[0][0] == matrix[2][0]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][1] == matrix[1][1]) && (matrix[0][1] == matrix[2][1]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][2] == matrix[1][2]) && (matrix[0][2] == matrix[2][2]))
        {
            win = 1;
            break;
        }
        else if ( (matrix[0][0] == matrix[1][1]) && (matrix[0][0] == matrix[2][2]))
        {
            win = 1;
            break;
        }
        if ( (matrix[0][2] == matrix[1][1]) && (matrix[0][2] == matrix[2][0]))
        {
            win = 1;
            break;
        }
    }
    start();
    if ( win == 1 )
    printf(cnt%2?"\n\n\n1st Player wins\n":"\n\n\n2nd Player wins\n");
    else
        cout << "\n\n\nDraw. Well Played both of you\n\n\n";
    system("pause");
    return 0;
}
