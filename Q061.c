/*
Q61 - Unknown
Question 61 from source sheet
*/
#include <stdio.h>

int main(void) {
    int n,a[1000],x,idx=-1;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(int i=0;i<n;i++)if(a[i]==x){idx=i;break;}printf("%d\n",idx);
    return 0;
}
