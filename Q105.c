/*
Q105 - Logic Enhancers
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],cand=0,c=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&a[i]);if(c==0){cand=a[i];c=1;}else c+=(a[i]==cand)?1:-1;}c=0;for(int i=0;i<n;i++)if(a[i]==cand)c++;printf("%d\n",c>n/2?cand:-1);
    return 0;
}
