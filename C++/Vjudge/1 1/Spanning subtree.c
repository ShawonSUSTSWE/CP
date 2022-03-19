#include<stdio.h>

int main ()

{
    int num_of_tree, i = 1;
    while(1)
    {
        scanf("%d", &num_of_tree);
        if ( num_of_tree == 0 )
            break;
        printf("Case %d: %d\n", i, num_of_tree/2);
        i++;
    }
}
