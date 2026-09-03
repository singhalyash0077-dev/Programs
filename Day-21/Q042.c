/* Day 21 | 03 September 2026 | Question 2 */
/*
Q42 - Loops without Arrays/Strings
Write a program to check if a number is a perfect number.
*/
#include <stdio.h>

int main(void) {
    int n,s=0; scanf("%d",&n); for(int i=1;i<=n/2;i++)if(n%i==0)s+=i; puts(n>1&&s==n?"Perfect":"Not Perfect");
    return 0;
}
