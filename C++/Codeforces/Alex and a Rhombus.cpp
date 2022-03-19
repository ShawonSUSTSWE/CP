#include<bits/stdc++.h>

using namespace std;

string code[] = {"","","2","3","322","5","53","7","7222","7332"};

int main ()

{
    int n;
    string num, ans = "";
    cin >> n >> num;
    for ( int i = 0; i < num.length(); i++ ) ans += code[num[i]-'0'];
    sort(ans.rbegin(),ans.rend());
    cout << ans << endl;
}
