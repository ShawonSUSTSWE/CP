#include <bits/stdc++.h>


using namespace std;

int main()

{
    char Shape[5000][2];
	double K[5000];
	double sqrt3 = sqrt(3);
	int testcase, n;
	scanf("%d", &testcase);
	while (testcase--)
    {
		scanf("%d", &n);
		double area = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%s %lf", &Shape[i], &K[i]);
			if (Shape[i][0] == 'C' || Shape[i][0] == 'S')
				area += K[i]*K[i];
			else
				area += K[i]*K[i]*sqrt3/4.f;
		}

		double h, v;
		for (int i = 0; i < n; i++)
		{
			if (Shape[i][0] == 'C')
			{
				h = K[i];
				int j;
				for (j = i+1; j < n; j++)
				{
					h += K[j];
					if (Shape[j][0] == 'C')
						break;
				}
				v = K[j];
				for (j = j+1; j < n; j++)
				{
					v += K[j];
					if (Shape[j][0] == 'C')
						break;
				}
				break;
			}
		}
		printf("%.4f\n", h*v - area);
	}
	return 0;
}
