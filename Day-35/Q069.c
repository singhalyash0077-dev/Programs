/* Day 35 | 17 September 2026 | Question 1 */
/*
Q69 - Unknown
Question 69 from source sheet
*/
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);if(n<2){puts("No second largest");return 0;}long long first=LLONG_MIN,second=LLONG_MIN;for(int i=0;i<n;i++){if(a[i]>first){second=first;first=a[i];}else if(a[i]>second&&a[i]<first)second=a[i];}if(second==LLONG_MIN)puts("No second largest");else printf("%lld\n",second);
    return 0;
}
