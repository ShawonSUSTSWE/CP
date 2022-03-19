#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num, need = 0;
    cin >> num;
    int citizen[num];
    for ( int i = 0; i < num; i++ )
    {
        cin >> citizen[i];
    }
    sort(citizen, citizen+num);
    for ( int i = 0; i < num; i++ )
    {
        need += (citizen[num-1]-citizen[i]);
    }
    cout << need << endl;
    return 0;
}
