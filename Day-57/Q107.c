/* Day 57 | 09 October 2026 | Question 1 */
/*
Q107 - Logic Enhancers
Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++){int ans=-1;for(int j=i-1;j>=0;j--)if(a[j]>a[i]){ans=a[j];break;}printf("%d%s",ans,i==n-1?"\n":", ");}
    return 0;
}
