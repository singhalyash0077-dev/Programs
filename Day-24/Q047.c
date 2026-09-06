/* Day 24 | 06 September 2026 | Question 1 */
/*
Q47 - Nested Loops without Arrays/Strings
Write a program to print the following pattern:
*
**
***
****
*****
*/
#include <stdio.h>

int main(void) {
    for(int i=1;i<=5;i++){for(int j=1;j<=i;j++)putchar('*');putchar('\n');}
    return 0;
}
