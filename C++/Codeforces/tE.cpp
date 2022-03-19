#include<bits/stdc++.h>

using namespace std;

int num[1005];

int main ()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T, n, k, current = 0, once = 0;
    cin >> T;
    while(T--)
    {
        cin >> n;
        memset(num,0,sizeof(num));
        current = 0, once = 0;
        for ( int i = 1; i <= n; i++ )
        {
            cin >> k;
            if(current == k && !once) {
                    once++;
                    continue;
            }
            else if ( current == k && once ) once = 0;
            current = k;
            num[k]++;
        }
        cout << max_element(num,num+1005)-num << endl;
        //while(num[k]!=*max_element(num,num+n))
    }
}
