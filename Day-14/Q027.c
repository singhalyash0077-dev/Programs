/* Day 14 | 27 August 2026 | Question 1 */
/*
Q27 - Loops without Arrays/Strings
Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main(void) {
    int n; scanf("%d",&n); long long s=0; for(int i=0;i<n;i++)s+=2*i+1; printf("%lld\n",s);
    return 0;
}
