/* Day 39 | 21 September 2026 | Question 1 */
/*
Q77 - 2D Arrays
Check if the elements on the diagonal of a matrix are distinct.
*/
#include <stdio.h>

int main(void) {
    int n,a[100][100],ok=1;scanf("%d",&n);for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][i]==a[j][j])ok=0;puts(ok?"Distinct":"Not Distinct");
    return 0;
}
