/* Day 19 | 01 September 2026 | Question 1 */
/*
Q37 - Loops without Arrays/Strings
Write a program to find the LCM of two numbers.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long a,b,x,y; scanf("%lld%lld",&a,&b); x=llabs(a);y=llabs(b); long long p=x*y; while(y){long long t=x%y;x=y;y=t;} printf("%lld\n",x?p/x:0);
    return 0;
}
