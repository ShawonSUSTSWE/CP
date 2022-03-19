#include<bits/stdc++.h>

using namespace std;

vector <int> l, r;

int main ()

{
    int T, c = 0;
    scanf("%d", &T);
    while(T--)
    {
        int n, q, i, j, que, ans;
        scanf("%d %d", &n, &q);
        while(n--)
        {
            scanf("%d %d", &i, &j);
            l.push_back(i);
            r.push_back(j);
        }
        printf("Case %d:\n", ++c);
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        while(q--)
        {
            scanf("%d", &que);
            ans = (upper_bound(l.begin(),l.end(),que)-l.begin()) - (lower_bound(r.begin(),r.end(),que)-r.begin());
            printf("%d\n", ans);
        }
        l.clear();
        r.clear();
    }
}
