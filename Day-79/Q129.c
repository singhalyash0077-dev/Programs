/* Day 79 | 31 October 2026 | Question 1 */
/*
Q129 - File Handling
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/
#include <stdio.h>

int main(void) {
    FILE *f=fopen("numbers.txt","r");if(!f){perror("numbers.txt");return 1;}long long s=0;int x,n=0;while(fscanf(f,"%d",&x)==1){s+=x;n++;}fclose(f);if(!n){puts("No numbers");return 0;}printf("Sum = %lld\nAverage = %.2f\n",s,(double)s/n);
    return 0;
}
