/* Day 6 | 19 August 2026 | Question 1 */
/*
Q11 - Conditional Statements
Write a program to input an integer and check whether it is even or odd using if–else.
*/
#include <stdio.h>

int main(void) {
    long long n; scanf("%lld",&n); puts(n%2?"Odd":"Even");
    return 0;
}
