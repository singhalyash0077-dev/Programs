/* Day 50 | 02 October 2026 | Question 2 */
/*
Q100 - Strings
Print all sub-strings of a string.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int n=strcspn(s,"\n");for(int len=1;len<=n;len++)for(int i=0;i+len<=n;i++){for(int j=i;j<i+len;j++)putchar(s[j]);putchar('\n');}
    return 0;
}
