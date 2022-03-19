#include<stdio.h>

int main()

{
    int size_array, i, j, arr[101][101];
    while(1)
    {
        scanf("%d", &size_array);
        if ( size_array == 0 )
        {
            break;
        }
        int sum_row[size_array], sum_col[size_array];
        int chaos_row = 0, chaos_col = 0, error1, error2;
        for ( i = 0; i < size_array; i++ )
        {
            for ( j = 0; j < size_array; j++ )
            {
                scanf("%d", &arr[i][j]);
            }
        }
        for ( i = 0; i < size_array; i++ )
        {
            sum_row[i] = 0;
            sum_col[i] = 0;
        }
        for ( i = 0; i < size_array; i++ )
        {
            for ( j = 0; j < size_array; j++ )
            {
                sum_row[i] += arr[i][j];
                sum_col[i] += arr[j][i];
            }
        }
        for ( i = 0; i < size_array; i++ )
        {
            if ( sum_row[i] % 2 != 0 )
            {
                chaos_row++;
                error1 = i+1;
            }
            if ( sum_col[i] % 2 != 0 )
            {
                chaos_col++;
                error2 = i+1;
            }
        }
        if ( chaos_row == 0 & chaos_col == 0 )
        {
            printf("OK\n");
        }
        else if ( chaos_row == 1 && chaos_col == 1 )
        {
            printf("Change bit (%d,%d)", error1, error2);
        }
        else
        {
            printf("Corrupt\n");
        }
    }

}
