/* Day 28 | 10 September 2026 | Question 1 */
/*
Q55 - Nested Loops without Arrays/Strings
Write a program to print all the prime numbers from 1 to n.
*/
#include <stdio.h>

int main(void) {
    int n;scanf("%d",&n);for(int x=2;x<=n;x++){int p=1;for(int d=2;d*d<=x;d++)if(x%d==0){p=0;break;}if(p)printf("%d ",x);}putchar('\n');
    return 0;
}
