/* Day 67 | 19 October 2026 | Question 1 */
/*
Q117 - Logic Enhancers
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>

int main(void) {
    int m,n,a[1000],b[1000],i=0,j=0;scanf("%d",&m);for(int k=0;k<m;k++)scanf("%d",&a[k]);scanf("%d",&n);for(int k=0;k<n;k++)scanf("%d",&b[k]);while(i<m||j<n){int v;if(j>=n||(i<m&&a[i]<=b[j]))v=a[i++];else v=b[j++];printf("%d%s",v,(i==m&&j==n)?"\n":" ");}
    return 0;
}
