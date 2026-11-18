/*
Q43 - Loops without Arrays/Strings
Write a program to check if a number is a strong number.
*/
#include <stdio.h>

int main(void) {
    int n,t,s=0; scanf("%d",&n);t=n;do{int d=t%10,f=1;for(int i=2;i<=d;i++)f*=i;s+=f;t/=10;}while(t);puts(s==n?"Strong":"Not Strong");
    return 0;
}
