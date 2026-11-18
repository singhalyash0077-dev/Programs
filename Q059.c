/*
Q59 - Unknown
Question 59 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,x,e=0,o=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);x%2?o++:e++;}printf("Even = %d\nOdd = %d\n",e,o);
    return 0;
}
