/* Day 37 | 19 September 2026 | Question 2 */
/*
Q74 - 2D Arrays
Find the transpose of a matrix.
*/
#include <stdio.h>

int main(void) {
    int r,c,a[100][100];scanf("%d%d",&r,&c);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int j=0;j<c;j++){for(int i=0;i<r;i++)printf("%d%s",a[i][j],i==r-1?"":" ");putchar('\n');}
    return 0;
}
