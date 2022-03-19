#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()

{
    int n, m, T = 0, tn, x, y;
    string name[105], nm;
    while(scanf("%d", &n) == 1)
    {
        map <string,int> Beverage;
        vector <int> ser[105];
        int degree[105] = {};
        for ( int i = 0; i < n; i++ )
        {
            cin >> name[i];
            Beverage[name[i]] = i;
        }
        scanf("%d", &m);
        while(m--)
        {
            cin >> nm;
            x = Beverage[nm];
            cin >> nm;
            y = Beverage[nm];
            ser[x].push_back(y);
            degree[y]++;
        }
        priority_queue<int, vector<int>, greater<int> > Q;
        for ( int i = 0; i < n; i++ )
            if (!degree[i])
                Q.push(i);
        printf("Case #%d: Dilbert should drink beverages in this order:", ++T);
        while(!Q.empty())
        {
            tn = Q.top();
            Q.pop();
            for ( vector<int>::iterator it = ser[tn].begin(); it != ser[tn].end(); it++ )
            {
                degree[*it]--;
                if ( degree[*it] == 0 )
                    Q.push(*it);

            }
            cout << " " << name[tn];
        }
        printf(".\n\n");
    }
}
