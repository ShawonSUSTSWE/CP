#include<bits/stdc++.h>
#define INF INT_MAX

using namespace std;

int main()
{
    cout<<"Please enter the size of the array : ";
    int n;
    cin>>n;
    int arr[n+1];
    arr[0] = INT_MIN;
    cout<<"Now Enter " << n << " numbers -> ";
    for(int i=1; i<n+1; i++)
    {
        cin>>arr[i];
    }
       int temp, ptr;
    for(int i=2; i <= n; i++)
    {
        cout << endl;
        temp = arr[i];
        for(int j=i-1; j>=0; j--)
        {
            if(temp < arr[j])
            {
                arr[j+1]=arr[j];
            }
            else
            {
                ptr = j;
                break;
            }
        }
        cout<<"TEMP = "<< temp <<" PTR = "<< ptr+1 << endl;
        arr[ptr+1]=temp;
        cout<<"Sorted from 1 to "<< i << " -> ";
        for(int j=1; j<=n; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl ;
    }
    cout<<endl <<"The sorted array -> ";
    for(int j=1; j<=n; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
