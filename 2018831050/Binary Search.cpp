#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int arr_size, num;
    cout << "Please Enter the size of the array : ";
    cin >> arr_size;
    int arr[arr_size];
    cout << endl << "Please enter the numbers : ";
    for ( int i = 0; i < arr_size; i++ )
    {
        cin >> arr[i];
    }
    sort(arr, arr+arr_size);
    cout << endl << "The number you want to search : ";
    cin >> num;
    int start = 0, finish = arr_size-1, mid = ( start+finish)/2;
    while ( start <= finish && arr[mid] != num )
    {
        if ( num < arr[mid] )
        {
            finish = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = (start+finish)/2;
    }
    if ( arr[mid] == num )
    {
        cout << endl << "The position of the number is : " << mid+1 << endl;
    }
    else
    {
        cout << endl << "Number Not Found" << endl;
    }
    return 0;
}
