/* Day 5 | 18 August 2026 | Question 1 */
/*
Q9 - User Inputs, Operations & Output
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    double p,r,t; scanf("%lf%lf%lf",&p,&r,&t); double si=p*r*t/100.0, amount=p*pow(1+r/100.0,t); printf("Simple Interest = %.2f\nCompound Interest = %.2f\n",si,amount-p);
    return 0;
}
