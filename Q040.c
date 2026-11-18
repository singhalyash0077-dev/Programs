/*
Q40 - Loops without Arrays/Strings
Write a program to find the 1’s complement of a binary number and print it.
*/
#include <stdio.h>

int main(void) {
    char s[1000]; scanf("%999s",s); for(int i=0;s[i];i++){if(s[i]=='0')s[i]='1';else if(s[i]=='1')s[i]='0';else{puts("Invalid binary number");return 0;}}puts(s);
    return 0;
}
