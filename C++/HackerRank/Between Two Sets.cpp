#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num_a, num_b;
    cin >> num_a;
    cin >> num_b;
    int a[num_a], b[num_b];
    for ( int i = 0; i < num_a; i++)
    {
        cin >> a[i];
    }
    for ( int i = 0; i < num_b; i++)
    {
        cin >> b[i];
    }
    sort(a, a+num_a);
    sort(b, b+num_b);
    int div[b[0]+1], cnt1= 0, cnt2=0, cnt = 0;
    for ( int i = 0; i < b[0]+1; i++ )
        {
            div[i] = 0;
        }
    for ( int i = a[num_a-1]; i <= b[0]; i++ )
    {
        cnt1 = 0;
        for ( int j = 0; j < num_a; j++ )
        {
            if ( i % a[j] == 0 )
            {
                cnt1++;
            }
        }
        if ( cnt1 == num_a )
            div[i] = 1;
    }
    for ( int i = 2; i < b[0]+1; i++ )
    {
        cnt2 = 0;
        if ( div[i] != 1 )
            continue;
        else
            for ( int j = 0; j < num_b; j++ )
            {
                if ( b[j] % i == 0)
                    cnt2++;
            }
            if ( cnt2 == num_b )
                cnt++;
    }
    cout << cnt << endl;
    return 0;
}
