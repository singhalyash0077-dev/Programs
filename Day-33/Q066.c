/* Day 33 | 15 September 2026 | Question 2 */
/*
Q66 - Unknown
Question 66 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,a[1001],x,i;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(i=n-1;i>=0&&a[i]>x;i--)a[i+1]=a[i];a[i+1]=x;n++;for(i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
