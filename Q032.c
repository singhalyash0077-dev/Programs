/*
Q32 - Loops without Arrays/Strings
Write a program to check if a number is a palindrome.
*/
#include <stdio.h>

int main(void) {
    long long n,x,r=0; scanf("%lld",&n); x=n; do{r=r*10+x%10;x/=10;}while(x); puts(r==n?"Palindrome":"Not Palindrome");
    return 0;
}
