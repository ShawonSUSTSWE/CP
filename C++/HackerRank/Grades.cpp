#include<bits/stdc++.h>

using namespace std;

int main()

{
    int num_of_students, mark;
    vector < int > student;
    cin >> num_of_students;
    for ( int i = 0; i < num_of_students; i++ )
    {
        cin >> mark;
        student.push_back(mark);
    }
    for ( int i = 0; i < student.size(); i++ )
    {
        if ( student[i] > 36 )
        {
            if ( (student[i] + 2) % 5 <= 1 )
            {
                student[i] += ( 2 - (student[i] + 2) % 5 );
            }
            cout << student[i] << endl;
        }
        else
            cout << student[i] << endl;
    }
    return 0;
}
