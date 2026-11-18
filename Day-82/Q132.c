/* Day 82 | 03 November 2026 | Question 1 */
/*
Q132 - Enum
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    enum Light{RED,YELLOW,GREEN};char s[20];scanf("%19s",s);enum Light x;if(strcmp(s,"RED")==0)x=RED;else if(strcmp(s,"YELLOW")==0)x=YELLOW;else if(strcmp(s,"GREEN")==0)x=GREEN;else{puts("Invalid");return 0;}switch(x){case RED:puts("Stop");break;case YELLOW:puts("Wait");break;case GREEN:puts("Go");break;}
    return 0;
}
