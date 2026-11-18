/* Day 52 | 04 October 2026 | Question 1 */
/*
Q102 - Logic Enhancers
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],x,l=0,r,ans=-1;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]>=x){ans=m;r=m-1;}else l=m+1;}printf("%d\n",ans);
    return 0;
}
