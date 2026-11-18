/*
Q30 - Loops without Arrays/Strings
Write a program to reverse a given number.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n,r=0; scanf("%lld",&n); long long x=llabs(n); do{r=r*10+x%10;x/=10;}while(x); printf("%lld\n",n<0?-r:r);
    return 0;
}
