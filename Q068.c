/*
Q68 - Unknown
Question 68 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],pos;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&pos);if(pos<0||pos>=n){puts("Invalid position");return 0;}for(int i=pos;i<n-1;i++)a[i]=a[i+1];n--;for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
