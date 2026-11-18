/* Day 62 | 14 October 2026 | Question 1 */
/*
Q112 - Logic Enhancers
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);long long cur=a[0],best=a[0];for(int i=1;i<n;i++){cur=(cur+a[i]>a[i])?cur+a[i]:a[i];if(cur>best)best=cur;}printf("%lld\n",best);
    return 0;
}
