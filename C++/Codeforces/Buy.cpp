#include<iostream>

using namespace std;

int main()

{
	int n,s;
	long long a, minimum=1000000000;
	cin >> n;
	for ( int i=1; i<=n; i++)
    {
		cin >> a;
		if( minimum>(a-i+n)/n )
		{
			minimum=(a-i+n)/n;
			s=i;
		}
	}
	cout << s << endl;
}
