/*
Q16 - Conditional Statements
Write a program to input three numbers and find the largest among them using if–else.
*/
#include <stdio.h>

int main(void) {
    double a,b,c; scanf("%lf%lf%lf",&a,&b,&c); double m=a>b?a:b; if(c>m)m=c; printf("%.2f\n",m);
    return 0;
}
