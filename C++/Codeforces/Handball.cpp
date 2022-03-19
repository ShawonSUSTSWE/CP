#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int packet[7];
    while(scanf("%d %d %d %d %d %d", &packet[1], &packet[2], &packet[3], &packet[4], &packet[5], &packet[6]) == 6 && (packet[1] || packet[2] || packet[3] || packet[4] || packet[5] || packet[6]))
    {
        int ans = 0;
        ans = packet[6]+packet[5]+packet[4]+packet[3]/4;
        packet[1] -= 11*packet[5], packet[2] -= 5*packet[4];
        packet[3] %= 4;
        if ( packet[3] == 1 ) packet[1] -= 7, packet[2] -= 5, ans++;
        else if ( packet[3] == 2 ) packet[1] -= 6, packet[2] -= 3, ans++;
        else if ( packet[3] == 3 ) packet[1] -= 5, packet[2]--, ans++;
        if ( packet[2] < 0) packet[1] += packet[2]*4, packet[2] = 0;
        if ( packet[1] < 0 ) packet[1] = 0;
        ans += (packet[1]+packet[2]*4)/36;
        if ( (packet[1]+packet[2]*4)%36 ) ans++;
        cout << ans << endl;
    }
}
