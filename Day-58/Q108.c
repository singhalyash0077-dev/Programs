/* Day 58 | 10 October 2026 | Question 1 */
/*
Q108 - Logic Enhancers
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000];long long pre[1000],suf[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);long long p=1;for(int i=0;i<n;i++){pre[i]=p;p*=a[i];}p=1;for(int i=n-1;i>=0;i--){suf[i]=p;p*=a[i];}for(int i=0;i<n;i++)printf("%lld%s",pre[i]*suf[i],i==n-1?"\n":" ");
    return 0;
}
