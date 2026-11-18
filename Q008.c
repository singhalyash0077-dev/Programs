/*
Q8 - User Inputs, Operations & Output
Write a program to find and display the sum of the first n natural numbers.
*/
#include <stdio.h>

int main(void) {
    long long n; scanf("%lld",&n); printf("%lld\n",n*(n+1)/2);
    return 0;
}
