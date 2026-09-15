/* Day 33 | 15 September 2026 | Question 1 */
/*
Q65 - Unknown
Question 65 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],x,l=0,r,ans=-1;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x){ans=m;break;}if(a[m]<x)l=m+1;else r=m-1;}printf("%d\n",ans);
    return 0;
}
