/* Day 10 | 23 August 2026 | Question 2 */
/*
Q20 - Conditional Statements
Write a program to display the day of the week based on a number (1–7) using switch-case.
*/
#include <stdio.h>

int main(void) {
    int d; scanf("%d",&d); const char* a[]={"","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}; if(d>=1&&d<=7) puts(a[d]); else puts("Invalid day");
    return 0;
}
