/* Day 17 | 30 August 2026 | Question 2 */
/*
Q34 - Loops without Arrays/Strings
Write a program to check if a number is prime.
*/
#include <stdio.h>

int main(void) {
    int n,prime=1; scanf("%d",&n); if(n<2)prime=0; for(int i=2;i*i<=n&&prime;i++)if(n%i==0)prime=0; puts(prime?"Prime":"Not Prime");
    return 0;
}
