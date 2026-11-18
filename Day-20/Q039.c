/* Day 20 | 02 September 2026 | Question 1 */
/*
Q39 - Loops without Arrays/Strings
Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n,p=1;int found=0; scanf("%lld",&n); n=llabs(n); while(n){int d=n%10;if(d%2){p*=d;found=1;}n/=10;} printf("%lld\n",found?p:0);
    return 0;
}
