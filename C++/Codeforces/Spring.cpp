#include<bits/stdc++.h>

using namespace std;

int main ()

{
    string pattern;
    cin >> pattern;
    size_t found1 = pattern.find("ABC");
    size_t found2 = pattern.find("ACB");
    size_t found3 = pattern.find("BAC");
    size_t found4 = pattern.find("BCA");
    size_t found5 = pattern.find("CAB");
    size_t found6 = pattern.find("CBA");
    if ( found1 != string::npos || found2 != string::npos || found3 != string::npos
         || found4 != string::npos || found5 != string::npos || found6 != string::npos )
            cout << "Yes\n";
    else
        cout << "No\n";
}
