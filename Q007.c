/*
Q7 - User Inputs, Operations & Output
Write a program to swap two numbers without using a third variable.
*/
#include <stdio.h>

int main(void) {
    long long a,b; scanf("%lld%lld",&a,&b); a=a+b;b=a-b;a=a-b; printf("%lld %lld\n",a,b);
    return 0;
}
