/*
Q80 - 2D Arrays
Multiply two matrices.
*/
#include <stdio.h>

int main(void) {
    int r1,c1,r2,c2,a[50][50],b[50][50];scanf("%d%d",&r1,&c1);for(int i=0;i<r1;i++)for(int j=0;j<c1;j++)scanf("%d",&a[i][j]);scanf("%d%d",&r2,&c2);for(int i=0;i<r2;i++)for(int j=0;j<c2;j++)scanf("%d",&b[i][j]);if(c1!=r2){puts("Incompatible matrices");return 0;}for(int i=0;i<r1;i++){for(int j=0;j<c2;j++){long long s=0;for(int k=0;k<c1;k++)s+=(long long)a[i][k]*b[k][j];printf("%lld%s",s,j==c2-1?"":" ");}putchar('\n');}
    return 0;
}
