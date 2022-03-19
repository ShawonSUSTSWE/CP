#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int n, cnt = 0;
    double pro[7], a, b, c;
    cin >> n;
    while(n--)
    {
        for ( int i = 1; i <= 6; i++ ) cin >> pro[i];
        a = sqrt((pro[1]-pro[3])*(pro[1]-pro[3])+(pro[2]-pro[4])*(pro[2]-pro[4]));
        b = sqrt((pro[3]-pro[5])*(pro[3]-pro[5])+(pro[4]-pro[6])*(pro[4]-pro[6]));
        c = sqrt((pro[1]-pro[5])*(pro[1]-pro[5])+(pro[2]-pro[6])*(pro[2]-pro[6]));
        cout << a << " " << b << " " << c << endl;
        if ( !a && !b && !c && a+b > c && c+b > a && a+c > b )
            cnt++;
    }
    cout << cnt << endl;
}
