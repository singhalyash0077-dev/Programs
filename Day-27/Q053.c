/* Day 27 | 09 September 2026 | Question 1 */
/*
Q53 - Nested Loops without Arrays/Strings
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>

int main(void) {
    for(int i=1;i<=5;i++){for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}for(int i=4;i>=1;i--){for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}
    return 0;
}
