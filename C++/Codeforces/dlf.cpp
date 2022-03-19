#include<bits/stdc++.h>
using namespace std;
int i,s,x,y;
char a[200001],b[200001];
main()
{
    for(cin>>a>>b,x=strlen(a),y=strlen(b);++i<=x&i<=y&a[x-i]==b[y-i];)
        cout << x << " " << y << " " << i << endl;
    cout<<x+y-i-i+2;
}
