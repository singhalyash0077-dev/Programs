/*
Q67 - Unknown
Question 67 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,a[1001],x,pos;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d%d",&x,&pos);if(pos<0||pos>n){puts("Invalid position");return 0;}for(int i=n;i>pos;i--)a[i]=a[i-1];a[pos]=x;n++;for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
