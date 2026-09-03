/* Day 21 | 03 September 2026 | Question 1 */
/*
Q41 - Loops without Arrays/Strings
Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>

int main(void) {
    long long n; scanf("%lld",&n); if(n>=0&&n<10){printf("%lld\n",n);return 0;} long long p=1,t=n; while(t>=10){p*=10;t/=10;} int first=n/p,last=n%10; long long mid=(n%p)/10; printf("%lld\n",last*p+mid*10+first);
    return 0;
}
