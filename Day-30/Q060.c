/* Day 30 | 12 September 2026 | Question 2 */
/*
Q60 - Unknown
Question 60 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,x,p=0,neg=0,z=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);if(x>0)p++;else if(x<0)neg++;else z++;}printf("Positive = %d\nNegative = %d\nZero = %d\n",p,neg,z);
    return 0;
}
