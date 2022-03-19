#include<stdio.h>
#include<string.h>

int main()

{
    int test_case, num_of_inst, i, j, position, arr[1009], number;
    char inst[100], inst2[5];
    scanf("%d", &test_case);
    for ( i = 0; i < test_case; i++)
    {
        scanf("%d", &num_of_inst);
        position = 0;
        for ( j = 0; j < num_of_inst; j++ )
        {
            scanf("%s", &inst);
            if ( inst[0] == 'S' )
            {
                scanf("%s %d", &inst2, &number);
                printf("%d\n", arr[number-1]);
                if(arr[number-1] == 1)
                {
                    printf("1st\n");
                    position++;
                    arr[j] = 1;
                }
                else
                {
                    printf("2nd\n");
                    position--;
                    arr[j] = -1;
                }
            }
            if ( inst[0] == 'L' )
            {
                position--;
                arr[j] = -1;
            }
            if ( inst[0] == 'R' )
            {
                position++;
                arr[j] = 1;
            }
        }
        printf("%d\n", position);
    }
    return 0;
}
