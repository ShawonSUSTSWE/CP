#include<bits/stdc++.h>
#define ull unsigned long long int
#include<iomanip>

using namespace std;

int main()

{
    ull num_of_lantern;
    double length_of_road, pos_lan, radius;
    vector <double> lanterns, diff;
    cin >> num_of_lantern >> length_of_road;
    for ( ull i = 0; i < num_of_lantern; i++)
    {
        cin >> pos_lan;
        lanterns.push_back(pos_lan);
    }
    sort(lanterns.begin(), lanterns.end());
    diff.push_back(lanterns[0]-0);
    for ( ull i = 1; i < lanterns.size(); i++ )
    {
        diff.push_back((lanterns[i]-lanterns[i-1])/2);
    }
    diff.push_back(length_of_road-lanterns[lanterns.size()-1]);
    sort(diff.begin(), diff.end());
    radius = diff[diff.size()-1];
    cout << fixed << setprecision(10) << radius << endl;
    return 0;
}
