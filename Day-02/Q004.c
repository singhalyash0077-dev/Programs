/* Day 2 | 15 August 2026 | Question 2 */
/*
Q4 - User Inputs, Operations & Output
Write a program to calculate the area and circumference of a circle given its radius.
*/
#include <stdio.h>

int main(void) {
    double r; scanf("%lf",&r); const double pi=3.141592653589793; printf("Area = %.2f\nCircumference = %.2f\n",pi*r*r,2*pi*r);
    return 0;
}
