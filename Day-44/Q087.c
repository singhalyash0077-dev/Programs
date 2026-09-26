/* Day 44 | 26 September 2026 | Question 1 */
/*
Q87 - Strings
Count spaces, digits, and special characters in a string.
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int sp=0,d=0,x=0;for(int i=0;s[i]&&s[i]!='\n';i++){if(s[i]==' ')sp++;else if(isdigit((unsigned char)s[i]))d++;else if(!isalpha((unsigned char)s[i]))x++;}printf("Spaces = %d\nDigits = %d\nSpecial = %d\n",sp,d,x);
    return 0;
}
