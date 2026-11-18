/* Day 43 | 25 September 2026 | Question 1 */
/*
Q85 - Strings
Reverse a string.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int n=strcspn(s,"\n");for(int i=n-1;i>=0;i--)putchar(s[i]);putchar('\n');
    return 0;
}
