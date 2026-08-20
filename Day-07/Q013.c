/* Day 7 | 20 August 2026 | Question 1 */
/*
Q13 - Conditional Statements
Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <stdio.h>

int main(void) {
    int y; scanf("%d",&y); puts((y%400==0 || (y%4==0 && y%100!=0))?"Leap Year":"Not Leap Year");
    return 0;
}
