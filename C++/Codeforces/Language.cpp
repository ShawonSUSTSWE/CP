#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string word;
    int c = 1;
    while(1)
    {
        cin >> word;
        if ( word[0] == '#' )
            break;
        printf("Case %d: ", c++);
        if ( word == "HELLO" )
        {
            printf("ENGLISH\n");
        }
        else if ( word == "HALLO" )
        {
            printf("GERMAN\n");
        }
        else if ( word == "HOLA" )
        {
            printf("SPANISH\n");
        }
        else if ( word == "BONJOUR" )
        {
            printf("FRENCH\n");
        }
        else if ( word == "CIAO" )
        {
            printf("ITALIAN\n");
        }
        else if ( word == "ZDRAVSTVUJTE" )
        {
            printf("RUSSIAN\n");
        }
        else
        {
            printf("UNKNOWN\n");
        }
    }
}
