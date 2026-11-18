/* Day 69 | 21 October 2026 | Question 1 */
/*
Q119 - Logic Enhancers
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>

int main(void) {
    int n,x,ans=0;scanf("%d",&n);int seen[100000]={0};for(int i=0;i<n;i++){scanf("%d",&x);if(x>=0&&x<100000&&seen[x])ans=x;else if(x>=0&&x<100000)seen[x]=1;}printf("%d\n",ans);
    return 0;
}
