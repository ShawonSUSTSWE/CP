#include<bits/stdc++.h>
#define ll long long int

ll bill = 0;

using namespace std;

ll Bill( ll s, ll n )
{
    if ( s >= n )
    {
        bill += s/n;
        s -= (s/n)*n;
    }
    return s;
}

int main ()

{
    ll sum;
    cin >> sum;
    sum = Bill(sum,100);
    if (sum>0)
    {
        sum = Bill(sum,20);
        if(sum>0)
        {
            sum = Bill(sum,10);
            if ( sum>0 )
            {
                sum = Bill(sum,5);
                if(sum>0)
                    sum = Bill(sum,1);
            }
        }
    }

    cout << bill << endl;
}

