/* Day 42 | 24 September 2026 | Question 2 */
/*
Q84 - Strings
Convert a lowercase string to uppercase without using built-in functions.
*/
#include <stdio.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z')s[i]-=32;printf("%s",s);
    return 0;
}
