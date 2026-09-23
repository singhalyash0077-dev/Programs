/* Day 41 | 23 September 2026 | Question 1 */
/*
Q81 - Strings
Count characters in a string without using built-in length functions.
*/
#include <stdio.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int n=0;while(s[n]&&s[n]!='\n')n++;printf("%d\n",n);
    return 0;
}
