/*
Q28 - Loops without Arrays/Strings
Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main(void) {
    int n; scanf("%d",&n); unsigned long long p=1; for(int i=2;i<=n;i+=2)p*=i; printf("%llu\n",p);
    return 0;
}
