/*
Q31 - Loops without Arrays/Strings
Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>

int main(void) {
    unsigned int n; scanf("%u",&n); if(n==0){puts("0");return 0;} char b[65];int i=0;while(n){b[i++]=(char)('0'+n%2);n/=2;}while(i--)putchar(b[i]);putchar('\n');
    return 0;
}
