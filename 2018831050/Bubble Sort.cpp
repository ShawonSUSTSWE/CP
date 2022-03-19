#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int total_comp = 0, total_swap = 0, arr_size, choice;
    cout << "This program will show all the steps of bubble sort\n";
    cout << "Please enter the array size : ";
    cin >> arr_size;
    int arr[arr_size];
    cout << "Now Enter " << arr_size << " numbers : ";
    for ( int i =0; i < arr_size; i++ )
    {
        cin >> arr[i];
    }
    here :
    cout << "\n\nHow do you want to sort the numbers?\n";
    cout << "\n1.Ascending\n2.Descending\n";
    cout << "\nEnter your choice : ";
    cin >> choice;
    cout << endl;
    int pass, comparison, swapp, temp;
    if ( choice == 1 )
    {
        for ( int i = 1; i < arr_size; i++ )
        {
            cout << endl <<"Pass " << i << ":\n";
            comparison = 0, swapp = 0;
            for ( int k = 0; k < arr_size-i; k++ )
            {
                comparison++;
                if ( arr[k] > arr[k+1] )
                {
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                    swapp++;
                    cout << "Swap between " << k+1 << " and " << k+2 << " --> ";
                    for ( int j = 0; j < arr_size;j++ )
                        cout << arr[j] << " ";
                }
                else
                {
                    cout << "No swapping here     --> ";
                    for ( int j = 0; j < arr_size;j++ )
                        cout << arr[j] << " ";
                }
                cout << endl;
            }
            total_comp += comparison;
            total_swap += swapp;

            cout << endl <<"Pass " << i << " is complete. The Array after pass " << i << ":\n";
            for ( int j = 0; j < arr_size;j++ )
                cout << arr[j] << " ";
            cout << endl  << "Comparisons during this Pass -> " << comparison << endl;
            cout << "Swaps during this Pass -> " << swapp << endl;
        }
    }
    else if ( choice == 2 )
    {
        for ( int i = 1; i < arr_size; i++ )
        {
            cout << endl <<"Pass " << i << ":\n";
            comparison = 0, swapp = 0;
            for ( int k = 0; k < arr_size-i; k++ )
            {
                comparison++;
                if ( arr[k] < arr[k+1] )
                {
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                    swapp++;
                    cout << "Swap between " << k+1 << " and " << k+2 << " --> ";
                    for ( int j = 0; j < arr_size;j++ )
                        cout << arr[j] << " ";
                }
                else
                {
                    cout << "No swapping here     --> ";
                    for ( int j = 0; j < arr_size;j++ )
                        cout << arr[j] << " ";
                }
                cout << endl;
            }
            total_comp += comparison;
            total_swap += swapp;

            cout << endl <<"Pass " << i << " is complete. The Array after pass " << i << ":\n";
            for ( int j = 0; j < arr_size;j++ )
                cout << arr[j] << " ";
            cout << endl  << "Comparisons during this Pass -> " << comparison << endl;
            cout << "Swaps during this Pass -> " << swapp << endl;
        }
    }
    else
    {
        cout << "Please enter 1 or 2\n";
        goto here;
    }
    cout  << endl << endl << "Total Comparisons --> " << total_comp << endl;
    cout << "Total Swaps --> " << total_swap << endl;
    cout << "The Sorted Array --> ";
    for ( int i = 0; i < arr_size; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
