/* Day 61 | 13 October 2026 | Question 1 */
/*
Q111 - Logic Enhancers
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);for(int i=0;i+k<=n;i++){int ans=0;for(int j=i;j<i+k;j++)if(a[j]<0){ans=a[j];break;}printf("%d%s",ans,i+k==n?"\n":" ");}
    return 0;
}
