/* Day 23 | 05 September 2026 | Question 2 */
/*
Q46 - Nested Loops without Arrays/Strings
Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main(void) {
    for(int i=0;i<5;i++){for(int j=0;j<5;j++)putchar('*');putchar('\n');}
    return 0;
}
