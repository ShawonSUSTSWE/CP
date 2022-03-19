#include<bits/stdc++.h>

using namespace std;

int main()

{
    double area, l, w, s1, s2, k;
    while(1)
    {
        cin >> l >> w >> s1 >> s2;
        if ( l == 0 && w == 0 && s1 == 0 && s2 == 0 )
        {
            break;
        }
        k = sqrt(pow(l,2)+pow(w,2));
        area = 2*s1 + 2*s2 ;
        if ( area <= l || area <= w || area <= k-(fabs(s1-s2)) )
        {
            cout << "S\n";
        }
        else
            cout << "N\n";
    }
    return 0;
}
