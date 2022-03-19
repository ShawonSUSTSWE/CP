#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int maximum = 0, n;
    map <string,int> match;
    string team;
    cin >> n;
    while(n--)
    {
        cin >> team;
        match[team]++;
    }
    for ( map<string,int>::iterator i = match.begin(); i != match.end(); i++ )
    {
        maximum = max(maximum,i->second);
    }
    for ( map<string,int>::iterator i = match.begin(); i != match.end(); i++ )
    {
        if(maximum==i->second) cout << i->first << endl;
    }
}
