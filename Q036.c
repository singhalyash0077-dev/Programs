/*
Q36 - Loops without Arrays/Strings
Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long a,b; scanf("%lld%lld",&a,&b); a=llabs(a);b=llabs(b); while(b){long long t=a%b;a=b;b=t;} printf("%lld\n",a);
    return 0;
}
