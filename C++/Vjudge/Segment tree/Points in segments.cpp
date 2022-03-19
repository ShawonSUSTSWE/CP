#include<bits/stdc++.h>

using namespace std;

vector <int> uniquenum;

int main()

{
    int n, m, num1, num2;
    scanf("%d %d", &n, &m);
    int numbers[m+1];
    memset(numbers, 0, sizeof(numbers));
    for ( int i = 0; i < n; i++ )
    {
        scanf("%d %d", &num1, &num2);
        for ( int j = num1; j <= num2; j++ )
        {
            if(!numbers[j])
            {
                uniquenum.push_back(j);
                numbers[j] = 1;
            }
        }
    }
    cout << m-uniquenum.size() << endl;
    for ( int i = 1; i <= m; ++i )
    {
        if (!numbers[i])
            cout << i << " ";
    }
}
