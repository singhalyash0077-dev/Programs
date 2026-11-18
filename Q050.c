/*
Q50 - Nested Loops without Arrays/Strings
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main(void) {
    for(int i=0;i<5;i++){for(int s=0;s<i;s++)putchar(' ');for(int j=0;j<5-i;j++)putchar('*');putchar('\n');}
    return 0;
}
