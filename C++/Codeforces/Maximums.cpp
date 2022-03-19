#include<bits/stdc++.h>

using namespace std;

int digit[10];

int main()

{
    int l, r, temp, dig;
    bool no = false;
    cin >> l >> r;
    for ( int i = l; i <= r; i++ )
    {
        no = false;
        temp = i;
        while(temp > 0)
        {
            dig = temp % 10;
            digit[dig]++;
            temp /= 10;
        }
        for ( int j = 0; j < 10; j++ )
        {
            if(digit[j] > 1)
            {
                no = true;
                break;
            }
        }
        if (!no){
          cout << i << endl;
          return 0;
        }
        memset(digit,0,sizeof(digit));
    }
    cout << "-1\n";
}
