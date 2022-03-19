#include <bits/stdc++.h>

using namespace std;

int main()

{
	int T, c = 0, n, x;
	scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        int tmp = 1, start = 0, ending, sum = 0, ans = 0;
        for (int i = 2; i <= n; i++)
        {
            scanf("%d", &x);
            sum += x;
            if (sum < 0) sum = 0, tmp = i;
            if (sum >= ans)
            {
                if (sum > ans || (sum == ans && (i - tmp > ending - start)))
                {
                    start = tmp;
                    ending = i;
                }
                ans = sum;
            }
        }
        if (ans > 0)
            printf("The nicest part of route %d is between stops %d and %d\n", ++c, start, ending);
        else
            printf("Route %d has no nice parts\n", ++c);
    }
    return 0;
}
