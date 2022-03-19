#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[555555], l = -1, k, p;

int main ()

{
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
        if(arr[i])
        {
            p++;
            if(k) k--;
        }
        else
        {
            k++;
            k > l ? l = k:1;
        }
    }
    cout << l+p << endl;

}
