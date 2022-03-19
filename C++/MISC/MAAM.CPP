#include<bits/stdc++.h>

using namespace std;

int main ()

{
    long long int num, temp, pos;
    cin >> num;
    long long int sorter[num+1];
    sorter[0] = 10000;
    for ( long long int i = 1; i <= num; i++ )
    {
        cin >> sorter[i];
    }
    for ( long long int i = 2; i <= num; i++ )
    {
        for ( long long int i = 1; i <= num; i++ )
        {
            cout << sorter[i] << " ";
        }
        cout << endl;
        temp = sorter[i];
        pos = i - 1;
        int flag = 0;
        while ( temp > sorter[pos] )
        {
            flag = 1;
            sorter[pos+1] = sorter[pos];
            pos--;
            cout << "Temp = " << temp << " position = " << pos << endl;
        }
        if ( flag == 0 )
            cout << "Temp = " << temp << " position = " << pos << endl;
        sorter[pos+1] = temp;
    }

}
