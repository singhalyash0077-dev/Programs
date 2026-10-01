/* Day 49 | 01 October 2026 | Question 1 */
/*
Q97 - Strings
Print the initials of a name.
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int start=1;for(int i=0;s[i];i++){if(start&&isalpha((unsigned char)s[i])){printf("%c ",toupper((unsigned char)s[i]));start=0;}if(isspace((unsigned char)s[i]))start=1;}putchar('\n');
    return 0;
}
