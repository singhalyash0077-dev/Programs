/*
Q73 - 2D Arrays
Find the sum of each row of a matrix and store it in an array.
*/
#include <stdio.h>

int main(void) {
    int r,c,a[100][100];scanf("%d%d",&r,&c);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int i=0;i<r;i++){long long s=0;for(int j=0;j<c;j++)s+=a[i][j];printf("%lld%s",s,i==r-1?"\n":" ");}
    return 0;
}
