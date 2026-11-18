/* Day 50 | 02 October 2026 | Question 1 */
/*
Q99 - Strings
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <stdio.h>

int main(void) {
    int d,m,y;scanf("%d/%d/%d",&d,&m,&y);const char* mon[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};if(m<1||m>12)puts("Invalid date");else printf("%02d-%s-%04d\n",d,mon[m],y);
    return 0;
}
