/* Day 68 | 20 October 2026 | Question 1 */
/*
Q118 - Logic Enhancers
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/
#include <stdio.h>

int main(void) {
    int n,x;long long s=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);s+=x;}long long total=(long long)n*(n+1)/2;printf("%lld\n",total-s);
    return 0;
}
