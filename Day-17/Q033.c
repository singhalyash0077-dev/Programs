/* Day 17 | 30 August 2026 | Question 1 */
/*
Q33 - Loops without Arrays/Strings
Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    int n,x,digits=0; scanf("%d",&n); x=n; int t=x; do{digits++;t/=10;}while(t); long long s=0;t=x;do{int d=t%10;s+=(long long)pow(d,digits);t/=10;}while(t); puts(s==n?"Armstrong":"Not Armstrong");
    return 0;
}
