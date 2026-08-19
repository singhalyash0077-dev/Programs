/* Day 6 | 19 August 2026 | Question 2 */
/*
Q12 - Conditional Statements
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/
#include <stdio.h>

int main(void) {
    double x; scanf("%lf",&x); if(x>0) puts("Positive"); else if(x<0) puts("Negative"); else puts("Zero");
    return 0;
}
