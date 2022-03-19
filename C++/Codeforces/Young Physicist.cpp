#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num_of_force, x[100], y[100], z[100], x_sum = 0, y_sum = 0, z_sum = 0;
    cin >> num_of_force;
    for ( int i = 0; i < num_of_force; i++ )
    {
        cin >> x[i] >> y[i] >> z[i];
        x_sum += x[i];
        y_sum += y[i];
        z_sum += z[i];
    }
    if ( x_sum == 0 && y_sum == 0 && z_sum == 0 )
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
