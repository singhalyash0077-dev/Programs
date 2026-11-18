/* Day 49 | 01 October 2026 | Question 2 */
/*
Q98 - Strings
Print initials of a name with the surname displayed in full.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1000],*w[100],*t;fgets(s,sizeof s,stdin);int n=0;t=strtok(s," \t\n");while(t&&n<100){w[n++]=t;t=strtok(NULL," \t\n");}for(int i=0;i<n-1;i++)printf("%c. ",toupper((unsigned char)w[i][0]));if(n)puts(w[n-1]);
    return 0;
}
