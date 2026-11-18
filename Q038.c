/*
Q38 - Loops without Arrays/Strings
Write a program to find the sum of digits of a number.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n,s=0; scanf("%lld",&n); n=llabs(n); while(n){s+=n%10;n/=10;}printf("%lld\n",s);
    return 0;
}
