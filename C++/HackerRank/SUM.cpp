#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main ()

{
    long long int arr[5], minimum = 0, maximum = 0;
    for ( int i = 0; i < 5; i++ )
    {
        cin >> arr[i];
    }
    sort (arr,arr+5);
    for ( int i = 0; i < 4; i++ )
    {
        minimum += arr[i];
    }
    for ( int i = 1; i < 5; i++ )
    {
        maximum += arr[i];
    }
    cout << minimum << " " << maximum << "\n";
    return 0;
}
