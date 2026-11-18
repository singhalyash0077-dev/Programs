/* Day 26 | 08 September 2026 | Question 2 */
/*
Q52 - Nested Loops without Arrays/Strings
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main(void) {
    for(int i=1;i<=5;i++){int stars=(i<=3)?2*i-1:2*(6-i)-1; for(int j=0;j<stars;j++){putchar('*');if(j<stars-1)putchar('\n');} putchar('\n'); if(i<5)putchar('\n');}
    return 0;
}
