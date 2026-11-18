/* Day 63 | 15 October 2026 | Question 1 */
/*
Q113 - Logic Enhancers
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){int x=*(const int*)a,y=*(const int*)b;return (x>y)-(x<y);}

int main(void) {
    int n,a[1000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);if(k<1||k>n){puts("Invalid k");return 0;}qsort(a,n,sizeof(int),cmp);printf("%d\n",a[k-1]);
    return 0;
}
