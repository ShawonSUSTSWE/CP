#include<bits/stdc++.h>
long long int num_of_num, sum = 0, num, smr[100001], temp;

using namespace std;

int main ()

{
    cin >> num_of_num;
    for ( long long int i = 0; i < num_of_num; i++ )
    {
        scanf("%lld", &num);
        smr[num] += num;
    }
    for ( long long int i = 2; i <= 100000; i++)
    {
        smr[i] = max(smr[i-1],smr[i]+smr[i-2]);
        temp = i;
    }
    cout << smr[temp] << endl;
}
