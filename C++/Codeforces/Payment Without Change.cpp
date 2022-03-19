#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    string word;
    cin >> word;
    int pre = 0;
    vector<int> A, Q;
    for ( int i = 0; i < word.length(); i++ )
    {
        if ( word[i] == 'A' )
            A.push_back(i);
        else if ( word[i] == 'Q' )
            Q.push_back(i);
    }
    int cnt = 0, sum = 0;
    for ( int i = 0; i < A.size(); i++ )
    {
        pre = 0, cnt = 0;
        for ( int j = 0; j < Q.size(); j++ )
        {
            if ( Q[j] < A[i] )
                pre++;
            if ( pre && Q[j] > A[i] )
                cnt++;
        }
        sum += (cnt*pre);
    }
    cout << sum << endl;
}
