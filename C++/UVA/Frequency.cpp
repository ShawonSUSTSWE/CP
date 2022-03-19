#include<bits/stdc++.h>

using namespace std;

int main ()

{
    char word[1001];
    int num[200];
    while ( scanf( "%s", &word) != EOF )
    {
        for ( int i = 0; i < 200; i++ )
            num[i] = 0;
        for ( int i = 0; i < strlen(word); i++ )
        {
            num[word[i]]++;
        }
        sort(num, num+200);
        for ( int i = ; i < )
    }
}
