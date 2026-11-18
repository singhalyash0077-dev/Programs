/* Day 60 | 12 October 2026 | Question 1 */
/*
Q110 - Logic Enhancers
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);for(int i=0;i+k<=n;i++){int m=a[i];for(int j=i+1;j<i+k;j++)if(a[j]>m)m=a[j];printf("%d%s",m,i+k==n?"\n":" ");}
    return 0;
}
