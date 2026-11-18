/* Day 48 | 30 September 2026 | Question 2 */
/*
Q96 - Strings
Reverse each word in a sentence without changing the word order.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int n=strlen(s);for(int i=0;i<n;){if(s[i]==' '||s[i]=='\n'){putchar(s[i++]);continue;}int j=i;while(j<n&&s[j]!=' '&&s[j]!='\n')j++;for(int k=j-1;k>=i;k--)putchar(s[k]);i=j;}
    return 0;
}
