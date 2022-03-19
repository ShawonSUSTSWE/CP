#include<bits/stdc++.h>

int number[100001];

using namespace std;

int main()

{
    int T, num_of_num, num,result;
    cin >> T;
    for ( int k = 0; k < T; k++ )
    {
        result = 0;
        cin >> num_of_num;
        for ( int i = 0; i < num_of_num; i++ )
        {
            scanf("%d", &num);
            number[num]++;
        }
        sort(number, number+100001);
        for ( int i = 100000; number[i] != 0;i--)
        {
            result += number[i]-1;
            number[i] = 0;
        }
        cout << num_of_num-result << endl;
    }
    return 0;
}
