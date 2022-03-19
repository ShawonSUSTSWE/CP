#include<bits/stdc++.h>

using namespace std;

vector <int> ind;
vector <string> nums;
vector < pair<int,string> > result;

int main ()

{
    int T, index;
    cin >> T;
    string s, str, t;
    getchar();
    while(T--)
    {
        getchar();
        getline(cin,s);
        stringstream ss(s);
        while(ss>>index) ind.push_back(index);
        getline(cin, str);
        stringstream sst(str);
        while(sst>>t) nums.push_back(t);
        int SIZE = min(ind.size(), nums.size());
        for ( int i = 0; i < SIZE; i++ )
        {
            result.push_back(make_pair(ind[i], nums[i]));
        }
        sort(result.begin(),result.end());
        for ( int i = 0; i < SIZE; i++ )
        {
            cout << result[i].second << endl;
        }
        ind.clear();
        nums.clear();
        result.clear();
        if (T)
            cout << endl;
    }
}
