/*
Q78 - 2D Arrays
Find the sum of main diagonal elements for a square matrix.
*/
#include <stdio.h>

int main(void) {
    int n,x;long long s=0;scanf("%d",&n);for(int i=0;i<n;i++)for(int j=0;j<n;j++){scanf("%d",&x);if(i==j)s+=x;}printf("%lld\n",s);
    return 0;
}
