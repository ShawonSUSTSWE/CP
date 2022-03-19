#include<bits/stdc++.h>

using namespace std;

int main ()

{
    char b;
    string msg = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(cin.get(b))
    {
        b = tolower(b);
        if ( b == ' ' || b == 10 ) cout << b;
        else cout << msg[msg.rfind(b)-2];
    }
}
