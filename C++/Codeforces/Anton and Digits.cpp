#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string name;
    cin >> name;
    if ( ( name.find("AB") != -1 && name.find("BA",name.find("AB")+2) != -1 ) || ( name.find("BA") != -1 && name.find("AB",name.find("BA")+2) != -1 ) )
        cout << "YES\n";
    else
        cout << "NO\n";
}
