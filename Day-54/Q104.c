/* Day 54 | 06 October 2026 | Question 1 */
/*
Q104 - Logic Enhancers
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;scanf("%lld",&n);long long s=n*(n+1)/2,x=(long long)sqrt((double)s);if(x*x==s)printf("%lld\n",x);else puts("-1");
    return 0;
}
