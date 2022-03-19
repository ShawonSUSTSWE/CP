#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, temp;
    char direction[50];
    while(scanf("%d", &n) == 1 && n)
    {
        int dice[6] = {1,2,3,4,5,6};
        while(n--)
        {
            scanf("%s", &direction);
            if(direction[0]=='n')
            {
               temp = dice[1];
               dice[1] = dice[0];
               dice[0] = dice[4];
               dice[4] = dice[5];
               dice[5] = temp;
            }
            else if ( direction[0] == 's' )
            {
                temp = dice[1];
                dice[1] = dice[5];
                dice[5] = dice[4];
                dice[4] = dice[0];
                dice[0] = temp;
            }
            else if ( direction[0] == 'e' )
            {
                temp = dice[3];
                dice[3] = dice[0];
                dice[0] = dice[2];
                dice[2] = dice[5];
                dice[5] = temp;
            }
            else
            {
                temp = dice[3];
                dice[3] = dice[5];
                dice[5] = dice[2];
                dice[2] = dice[0];
                dice[0] = temp;
            }
        }
        printf("%d\n",dice[0]);
    }
}
