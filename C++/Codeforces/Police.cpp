#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int num;
    string temp;
    queue <string> person;
    cin >> num;
    person.push("Sheldon");
    person.push("Leonard");
    person.push("Penny");
    person.push("Rajesh");
    person.push("Howard");
    for ( int i = 1; i <= num; i++ )
    {
        temp = person.front();
        if ( i == num )
        {
            cout << person.front() << endl;
            return 0;
        }
        person.pop();
        for ( int j = 1; j <= 2; j++ )
        {
            person.push(temp);
        }
    }
}
