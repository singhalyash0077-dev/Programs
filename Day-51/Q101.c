/* Day 51 | 03 October 2026 | Question 1 */
/*
Q101 - Logic Enhancers
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],t,l=0,r,first=-1,last=-1;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&t);r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]>=t){if(a[m]==t)first=m;r=m-1;}else l=m+1;}l=0;r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]<=t){if(a[m]==t)last=m;l=m+1;}else r=m-1;}printf("%d %d\n",first,last);
    return 0;
}
