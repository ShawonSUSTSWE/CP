#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100], q_str[90];
    int main_length, sub_length, match=0, pos;
    cout<<"Enter the string -> ";
    gets(str);
    cout<<"Enter the substring you want to search -> ";
    gets(q_str);
    main_length = strlen(str);
    sub_length = strlen(q_str);
    for( int i = 0; i < main_length - sub_length+1; i++)
    {
        for ( int j = 0 ; j < sub_length; j++ )
        {
            if ( str[i+j]== q_str[j] )
                match++;
            else
                break;
        }
        if ( match == sub_length )
        {
            pos = i+1;
            break;
        }
    }
    if ( match == sub_length )
    {
        cout<<"Sub-string found at position -> "<<pos<<endl;
    }
    else
    {
        cout << "Match Not Found!!!\n";
    }
    return 0;
}
