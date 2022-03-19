#include<stdio.h>
int num_of_students = 7, num_of_course = 3, operation, table[1000][1000];

int print_table()

{
    int i, j;
    for ( i = 0; i <= num_of_students; i++ )
    {
        for ( j = 0; j <= num_of_course; j++ )
        {
            printf("%4d ", table[i][j]);
        }
        printf("\n");
    }
}

int traverse_student ( int roll )

{
    int i;
    for ( i = 1; i <= num_of_students; i++ )
    {
        if ( roll == table[i][0] )
        {
            return i;
        }
    }
}

int traverse_course(int course)

{
    int i;
    for ( i = 1; i <= num_of_course; i++ )
    {
        if ( table[0][i] == course )
        {
            return i;
        }
    }
}

int specific_student (int roll)

{
    int i, j;
    for ( i = 0; i <= roll; i += roll )
    {
        for ( j = 0; j <= num_of_course; j++ )
        {
            printf("%4d ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int specific_course(int course)

{
    int i;
    for ( i = 0; i <= num_of_students; i++ )
    {
        printf("%4d %4d\n", table[i][0], table[i][course]);
    }
    return 0;
}

int student_query ( int roll, int query )

{
    int total = 0, i, minimum = 1000, maximum = 0;
    for ( i = 1; i <= num_of_course; i++ )
    {
        total += table[roll][i];
        if ( minimum > table[roll][i] )
        {
            minimum = table[roll][i];
        }
        if ( maximum < table[roll][i] )
        {
            maximum = table[roll][i];
        }
    }
    if ( query == 4 || query == 10 )
    {
        return total;
    }
    if ( query == 12 )
    {
        printf("\n\nThe minimum mark of %d is: %3d\n\nThe maximum mark of %d is: %3d\n", table[roll][0], minimum, table[roll][0], maximum);
        return 0;
    }
}

int course_query ( int course, int query )

{
    int total = 0, i, minimum = 1000, maximum = 0;
    for ( i = 1; i <= num_of_students; i++ )
    {
        total += table[i][course];
        if ( minimum > table[i][course] )
        {
            minimum = table[i][course];
        }
        if ( maximum < table[i][course] )
        {
            maximum = table[i][course];
        }
    }
    if ( query == 9 )
    {
        return total;
    }
    if ( query == 11 )
    {
        printf("\n\nThe minimum mark of the course number %d is: %3d\n\n", table[0][course], minimum);
        printf("The maximum mark of the course number %d is: %3d\n", table[0][course], maximum);
        return 0;
    }
}

int insert_a_student()

{
    int roll, i;
    printf("Enter Students ID: ");
    scanf("%d", &roll);
    num_of_students++;
    table[num_of_students][0] = roll;
    for ( i = 1; i <= num_of_course; i++ )
    {
        printf("\nEnter marks of course %d: ", table[0][i]);
        scanf("%d", &table[num_of_students][i]);
    }
    printf("\nStudent inserted successfully\n");
    return 0;
}

int insert_a_course()

{
    int course, i;
    printf("Enter the Course Number: ");
    scanf("%d", &course);
    num_of_course++;
    table[0][num_of_course] = course;
    for ( i = 1; i <= num_of_students; i++ )
    {
        printf("\nEnter marks of course %d for Student ID %d: ", table[0][num_of_course], table[i][0]);
        scanf("%d", &table[i][num_of_course]);
    }
    printf("\nCourse inserted successfully\n");
    return 0;
}

int delete_a_student(int roll)

{
    int i, j;
    for ( i = roll; i <= num_of_students; i++ )
    {
        for ( j = 0; j <= num_of_course; j++ )
        {
            table[i][j] = table[i+1][j];
        }
    }
    num_of_students--;
    printf("\n\nStudent deleted successfully\n");
}

int delete_a_course(int course)

{
    int i, j;
    for ( i = 0; i <= num_of_students; i++ )
    {
        for ( j = course; j <= num_of_course; j++ )
        {
            table[i][j] = table[i][j+1];
        }
    }
    num_of_course--;
    printf("\n\nCourse deleted successfully\n");
}

int main ()

{
    int i, student_number, course_number, roll, course;
    table[0][0] = -1, table[0][1] = 1001, table[0][2] = 1002, table[0][3] = 1003;
    table[1][1] = 78, table[1][2] = 90, table[1][3] = 34;
    table[2][1] = 45, table[2][2] = 90, table[2][3] = 23;
    table[3][1] = 78, table[3][2] = 67, table[3][3] = 26;
    table[4][1] = 90, table[4][2] = 50, table[4][3] = 88;
    table[5][1] = 67, table[5][2] = 34, table[5][3] = 87;
    table[6][1] = 78, table[6][2] = 56, table[6][3] = 56;
    table[7][1] = 45, table[7][2] = 9, table[7][3] = 90;
    for ( i = 1; i <= 7; i++ )
    {
        table[i][0] = 101+i;
    }
    print_table();
    while(1)
    {
        printf("Enter 1-14 to do the following tasks: ");
        printf("\n\t 1. Show all the marks and all the students\n");
        printf("\t 2. Show the marks of a specific student\n");
        printf("\t 3. Show the marks of a specific course\n");
        printf("\t 4. Show the total marks of a specific student\n");
        printf("\t 5. Insert a student\n");
        printf("\t 6. Insert a new course\n");
        printf("\t 7. Delete a specific student\n");
        printf("\t 8. Delete a specific course\n");
        printf("\t 9. Show the average marks of specific course\n");
        printf("\t10. Show the average marks of specific student\n");
        printf("\t11. Show the maximum and minimum marks of a specific course\n");
        printf("\t12. Show the maximum and minimum marks of a specific student\n");
        printf("\t13. Find the marks for a specific course of a student\n");
        printf("\t14. Exit\n");
        printf("\n\nEnter a number: ");
        scanf("%d", &operation);
        printf("\n\n");
        if ( operation == 14 )
        {
            break;
        }
        else if ( operation == 1 )
        {
            print_table();
        }
        else if ( operation == 2 )
        {
            printf("Enter the Student ID of the student: ");
            scanf("%d", &roll);
            student_number = traverse_student(roll);
            specific_student(student_number);
        }
        else if ( operation == 3 )
        {
            printf("Enter the course number: ");
            scanf("%d", &course);
            course_number = traverse_course(course);
            specific_course(course_number);
        }
        else if ( operation == 4 )
        {
            printf("Enter Student ID: ");
            scanf("%d", &roll);
            student_number = traverse_student(roll);
            printf("\n\nTotal mark of student %d is: %d\n", roll, student_query(student_number, 4));
        }
        else if ( operation == 5 )
        {
            insert_a_student();
        }
        else if ( operation == 6 )
        {
            insert_a_course();
        }
        else if ( operation == 7 )
        {
            printf("Enter Student ID: ");
            scanf("%d", &roll);
            student_number = traverse_student(roll);
            delete_a_student(student_number);
        }
        else if ( operation == 8 )
        {
            printf("Enter the course number: ");
            scanf("%d", &course);
            course_number = traverse_course(course);
            delete_a_course(course_number);
        }
        else if ( operation == 9 )
        {
            printf("Enter the Course number: ");
            scanf("%d", &course);
            course_number = traverse_course(course);
            double course_total = course_query(course_number, 9);
            course_total /= num_of_students;
            printf("\n\nThe average marks of course number %d is: %.2f\n", course, course_total);
        }
        else if ( operation == 10 )
        {
            printf("Enter the Student ID: ");
            scanf("%d", &roll);
            student_number = traverse_student(roll);
            double student_total = student_query(student_number, 10);
            student_total /= num_of_course;
            printf("\n\nThe average marks of %d is: %.2f\n", roll, student_total);
        }
        else if ( operation == 11 )
        {
            printf("Please enter the course number: ");
            scanf("%d", &course);
            course_number = traverse_course(course);
            course_query(course_number, 11);
        }
        else if ( operation == 12 )
        {
            printf("Please enter the Student ID: ");
            scanf("%d", &roll);
            student_number = traverse_student(roll);
            student_query(student_number, 12);
        }
        else if ( operation == 13 )
        {
            printf("Please enter the Student ID: ");
            scanf("%d", &roll);
            printf("\n\nPlease enter the Course number: ");
            scanf("%d", &course);
            student_number = traverse_student(roll);
            course_number = traverse_course(course);
            printf("\n\nThe marks of %d in course %d is: %d\n", roll, course, table[student_number][course_number]);
        }
        printf("\n\n");
    }
    return 0;
}
