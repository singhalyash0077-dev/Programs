/*
Q70 - Unknown
Question 70 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],k;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);if(n==0)return 0;k%=n;if(k<0)k+=n;for(int i=0;i<n;i++)printf("%d%s",a[(i-k+n)%n],i==n-1?"\n":" ");
    return 0;
}
