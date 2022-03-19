#include <bits/stdc++.h>
using namespace std;

int main()
{
     cout<<"Please Enter the size of the array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Now Enter " << n <<" numbers : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int loc, temp;
    for (int i = 0; i < n-1; i++)
    {
        cout<< endl <<"K = "<<i+1<<endl;
        loc = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[loc])
            loc = j;
        }
        temp=arr[loc];
        arr[loc]=arr[i];
        arr[i]=temp;
        cout<<"sorted for K = "<<i+1<<" and LOC = "<<loc+1<<endl;
        cout << "Current Array -> ";
        for ( int k = 0; k < n; k++ )
            cout << arr[k] << " ";
        cout << endl;
    }

    cout << "\nSorted array -> ";
    for ( int k = 0; k < n; k++ )
            cout << arr[k] << " ";
    cout<<endl;
    return 0;
}
