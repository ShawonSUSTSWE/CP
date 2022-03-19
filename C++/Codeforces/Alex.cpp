#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()

{
    int day, food, cnt = 0;
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    cin >> day >> food;
    int acc[day];
    for ( int i = 0; i < day; i++ )
    {
        cin >> acc[i];
        acc[i] *= (day-i);
    }
    sort(acc, acc+day);
    for ( int i = 0; food && i < day; i++, cnt++)
    {
        if(acc[i]>food)
            break;
        food -= acc[i];
    }
    cout << cnt << endl;
}
