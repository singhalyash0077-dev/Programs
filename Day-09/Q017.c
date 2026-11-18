/* Day 9 | 22 August 2026 | Question 1 */
/*
Q17 - Conditional Statements
Write a program to find the roots of a quadratic equation and categorize them.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    double a,b,c,d; scanf("%lf%lf%lf",&a,&b,&c); if(a==0){puts("Not quadratic"); return 0;} d=b*b-4*a*c; if(d>0) printf("Real and distinct: %.6f %.6f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a)); else if(d==0) printf("Real and equal: %.6f\n",-b/(2*a)); else printf("Complex: %.6f + %.6fi, %.6f - %.6fi\n",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
    return 0;
}
