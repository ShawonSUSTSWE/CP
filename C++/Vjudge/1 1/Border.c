#include<stdio.h>

int main()

{
    int i, test_case, co_ord1, co_ord2, main1, main2;
    while(1)
    {
        scanf("%d", &test_case);
        if ( test_case == 0 )
            break;
        scanf("%d %d", &main1, &main2);
        for ( i = 0; i < test_case; i++ )
        {
          scanf("%d %d", &co_ord1, &co_ord2);
          if ( co_ord1 == main1 || co_ord2 == main2 )
          {
              printf("divisa\n");
              continue;
          }
          if ( co_ord1 > main1 )
          {
              if ( co_ord2 > main2 )
              {
                  printf("NE\n");
              }
              else if ( co_ord2 < main2 )
              {
                  printf("SE\n");
              }
          }
          else
          {
              if ( co_ord2 > main2 )
              {
                  printf("NO\n");
              }
              else if ( co_ord2 < main2 )
              {
                  printf("SO\n");
              }
          }

        }
    }
    return 0;
}
