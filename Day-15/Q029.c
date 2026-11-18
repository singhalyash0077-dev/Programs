/* Day 15 | 28 August 2026 | Question 1 */
/*
Q29 - Loops without Arrays/Strings
Write a program to calculate the factorial of a number.
*/
#include <stdio.h>

int main(void) {
    int n; scanf("%d",&n); unsigned long long f=1; if(n<0){puts("Undefined");return 0;} for(int i=2;i<=n;i++)f*=i; printf("%llu\n",f);
    return 0;
}
