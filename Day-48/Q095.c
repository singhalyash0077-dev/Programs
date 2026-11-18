/* Day 48 | 30 September 2026 | Question 1 */
/*
Q95 - Strings
Check if one string is a rotation of another.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[1000],b[1000],d[2000];fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);a[strcspn(a,"\n")]=0;b[strcspn(b,"\n")]=0;if(strlen(a)!=strlen(b)){puts("Not Rotation");return 0;}strcpy(d,a);strcat(d,a);puts(strstr(d,b)?"Rotation":"Not Rotation");
    return 0;
}
