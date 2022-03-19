#include<stdio.h>

int main()

{
    int i, j, jolly = 1, num_of_numbers, numbers[3002], minimum, maximum;
    scanf("%d", &num_of_numbers);
    for ( i = 0; i < num_of_numbers; i++ )
    {
        scanf("%d", &numbers[i]);
        numbers[i] = abs(numbers[i]);
    }
    for ( i = 0; i < num_of_numbers-1; i++ )
    {
        for ( j = i+1; j < num_of_numbers; j++ )
        {
            if ( numbers[i] == numbers[j] )
            {
                jolly = 0;
                break;
            }
        }
    }
    minimum = numbers[0];
    maximum = 0;
    for ( i = 0; i < num_of_numbers; i++ )
    {
        if( numbers[i] > maximum )
            maximum = numbers[i];
        if ( numbers[i] < minimum )
            minimum = numbers[i];
    }
    if ( jolly == 1 && minimum == 1 && ( maximum == num_of_numbers || maximum == num_of_numbers+1 ) )
    {
        printf("Jolly\n");
    }
    else
    {
        printf("Not jolly\n");
    }
    return 0;
}
