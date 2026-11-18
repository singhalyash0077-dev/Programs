/*
Q72 - 2D Arrays
Find the sum of all elements in a matrix.
*/
#include <stdio.h>

int main(void) {
    int r,c,x;long long s=0;scanf("%d%d",&r,&c);for(int i=0;i<r*c;i++){scanf("%d",&x);s+=x;}printf("%lld\n",s);
    return 0;
}
