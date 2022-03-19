#include<bits/stdc++.h>

using namespace std;

int main()

{
    char c;
    while(1)
    {
        bool hyp = false, word = false;
        int cnt[100] = {};
        int length = 0;
        while(c = getchar())
        {
            if (c == EOF) return 0;
            if (c == '-') hyp = true;
            else if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
            {
                word = true;
                length++;
                hyp = false;
            }
            else
            {
                if ( hyp && c == '\n' )
                    continue;
                if ( word && c == '\'')
                    continue;
                if(word)
                {
                    word = false;
                    cnt[length]++;
                    hyp = false;
                    length = 0;
                }
                if ( c == '#' ) break;
            }

        }
        for ( int i = 0; i < 100; i++ )
            if(cnt[i])
            printf("%d %d\n", i, cnt[i]);
        printf("\n");
    }
    return 0;
}
