/* Day 70 | 22 October 2026 | Question 1 */
/*
Q120 - File Handling
Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[2000];fgets(s,sizeof s,stdin);int newSentence=1;for(int i=0;s[i];i++){if(isalpha((unsigned char)s[i])){s[i]=newSentence?toupper((unsigned char)s[i]):tolower((unsigned char)s[i]);newSentence=0;}if(s[i]=='.'||s[i]=='!'||s[i]=='?')newSentence=1;}printf("%s",s);
    return 0;
}
