/*
Q116 - Logic Enhancers
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],t;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&t);for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]+a[j]==t){printf("%d %d\n",i,j);return 0;}puts("-1 -1");
    return 0;
}
