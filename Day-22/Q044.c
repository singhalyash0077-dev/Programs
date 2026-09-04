/* Day 22 | 04 September 2026 | Question 2 */
/*
Q44 - Loops without Arrays/Strings
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>

int main(void) {
    int n; scanf("%d",&n); double s=0; for(int i=1;i<=n;i++)s+=(2.0*i-1)/(2.0*i); printf("%.6f\n",s);
    return 0;
}
