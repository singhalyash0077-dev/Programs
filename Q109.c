/*
Q109 - Logic Enhancers
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);if(k<=0||k>n){puts("Invalid k");return 0;}long long s=0;for(int i=0;i<k;i++)s+=a[i];long long best=s;for(int i=k;i<n;i++){s+=a[i]-a[i-k];if(s>best)best=s;}printf("%lld\n",best);
    return 0;
}
