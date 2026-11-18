/*
Q54 - Nested Loops without Arrays/Strings
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main(void) {
    for(int i=1;i<=4;i++){for(int s=0;s<4-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}for(int i=3;i>=1;i--){for(int s=0;s<4-i;s++)putchar(' ');for(int j=0;j<2*i-1;j++)putchar('*');putchar('\n');}
    return 0;
}
