#include<stdio.h>
#include<string.h>

int main()

{
    char time[6];
    double hour, minute, angle;
    while(1)
    {
        scanf("%s", time);
        if( time[1] == ':')
        {
            hour = time[0] - '0';
        }
        else
        {
            hour = (time[1] - '0') + 10;
        }
        minute = (10 * (time[strlen(time)-2]-'0')) + (time[strlen(time)-1] - '0');
        angle = ((hour*5)-minute)*6;
        angle -= (minute*0.5);
        if ( angle > 180 )
        {
            if ( angle == 360 )
            {
                angle = 0.000;
            }
            else
            {
                angle -= 180;
            }
        }
        if ( hour > 9 )
        {
            angle = 180 - angle;
        }
        if ( angle < 0 )
        {
            angle = angle - (angle*2);
        }
        printf("%.3f\n", angle);
    }


}
