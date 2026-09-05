/* Day 23 | 05 September 2026 | Question 1 */
/*
Q45 - Loops without Arrays/Strings
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/
#include <stdio.h>

int main(void) {
    int n; scanf("%d",&n); double s=0; for(int i=1;i<=n;i++)s+=(2.0*i)/(4.0*i-1); printf("%.6f\n",s);
    return 0;
}
