#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int age, height, maximum;
    vector <int> candle;
    cin >> age;
    for ( int i = 0; i < age; i++ )
    {
        cin >> height;
        candle.push_back(height);
    }
    maximum = candle[0];
    for ( int i = 0; i < candle.size(); i++ )
    {
        if ( maximum < candle[i] )
        {
            maximum = candle[i];
        }
    }
    int counter = 0;
    for ( int i = 0; i < candle.size(); i++ )
    {
        if ( maximum == candle[i] )
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
