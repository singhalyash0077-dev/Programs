/* Day 1 | 14 August 2026 | Question 2 */
/*
Q2 - User Inputs, Operations & Output
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main(void) {
    double a,b; scanf("%lf%lf",&a,&b); printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\n",a+b,a-b,a*b); if(b!=0) printf("Quotient = %.2f\n",a/b); else printf("Quotient = undefined (division by zero)\n");
    return 0;
}
