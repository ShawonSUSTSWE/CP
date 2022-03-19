#include<bits/stdc++.h>
#include<string>

using namespace std;

struct colour {

    char colour_name[100];

};

int main()

{
    int n, i, j;
    cin >> n;
    struct colour gangs[i];
    for ( i = 0; i < n; i++ )
    {
        scanf("%s", &gangs[i].colour_name);
    }
    for ( i =0 ; i < n; i++ )
    {
         int colour_counter[7] = {0};
         for ( j = 0; j < strlen(gangs[i].colour_name); j++ )
         {
             if ( gangs[i].colour_name[j] == 'r' || gangs[i].colour_name[j] == 'e' || gangs[i].colour_name[j] == 'd')
             {
                 colour_counter[0]++;
             }
             if ( gangs[i].colour_name[j] == 'b' || gangs[i].colour_name[j] == 'e' || gangs[i].colour_name[j] == 'l' || gangs[i].colour_name[j] == 'u' )
             {
                 colour_counter[1]++;
             }
             if ( gangs[i].colour_name[j] == 'y' || gangs[i].colour_name[j] == 'e' || gangs[i].colour_name[j] == 'l' || gangs[i].colour_name[j] == 'o' || gangs[i].colour_name[j] == 'w')
             {
                 colour_counter[2]++;
             }
             if ( gangs[i].colour_name[j] == 'g' || gangs[i].colour_name[j] == 'r' || gangs[i].colour_name[j] == 'e' || gangs[i].colour_name[j] == 'n' )
             {
                 colour_counter[3]++;
             }
             if ( gangs[i].colour_name[j] == 'i' || gangs[i].colour_name[j] == 'n' || gangs[i].colour_name[j] == 'd' || gangs[i].colour_name[j] == 'g' || gangs[i].colour_name[j] == 'o' )
             {
                 colour_counter[4]++;
             }
             if ( gangs[i].colour_name[j] == 'o' || gangs[i].colour_name[j] == 'r' || gangs[i].colour_name[j] == 'a' || gangs[i].colour_name[j] == 'n' || gangs[i].colour_name[j] == 'g' || gangs[i].colour_name[j] == 'e' )
             {
                 colour_counter[5]++;
             }
             if ( gangs[i].colour_name[j] == 'v' || gangs[i].colour_name[j] == 'i' || gangs[i].colour_name[j] == 'o' || gangs[i].colour_name[j] == 'l' || gangs[i].colour_name[j] == 'e' || gangs[i].colour_name[j] == 't' )
             {
                 colour_counter[6]++;
             }
         }
         int maximum = colour_counter[0];
         for ( i = 1; i <= 6; i++ )
         {
             if ( colour_counter[i] > maximum )
             {
                 maximum = colour_counter[i];
             }
         }
         if ( maximum == colour_counter[0] )
         {
             cout << "red\n";
         }
         if ( maximum == colour_counter[1] )
         {
             cout << "blue\n";
         }
         if ( maximum == colour_counter[0] )
         {
             cout << "yellow\n";
         }
         if ( maximum == colour_counter[0] )
         {
             cout << "green\n";
         }
         if ( maximum == colour_counter[0] )
         {
             cout << "indigo\n";
         }
         if ( maximum == colour_counter[0] )
         {
             cout << "orange\n";
         }
         if ( maximum == colour_counter[0] )
         {
             cout << "violet\n";
         }
    }
    return 0;
}
