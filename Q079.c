/*
Q79 - 2D Arrays
Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main(void) {
    int r,c,a[100][100];scanf("%d%d",&r,&c);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int sum=0;sum<=r+c-2;sum++){for(int i=0;i<r;i++){int j=sum-i;if(j>=0&&j<c)printf("%d ",a[i][j]);}}putchar('\n');
    return 0;
}
