#include<bits/stdc++.h>

using namespace std;

map <string, string> Handle;

int main ()

{
    string old_id, new_id;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> old_id >> new_id;
        if ( Handle[old_id] != "" ) Handle[new_id] = Handle[old_id];
        else Handle[new_id] = old_id;
        Handle.erase(old_id);
    }
    cout << Handle.size() << endl;
    for ( map<string,string>::iterator i = Handle.begin(); i != Handle.end(); i++ )
        cout << i->second << " " << i->first << endl;
}
