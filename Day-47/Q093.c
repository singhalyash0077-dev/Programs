/* Day 47 | 29 September 2026 | Question 1 */
/*
Q93 - Strings
Check if two strings are anagrams of each other.
*/
#include <stdio.h>

int main(void) {
    char a[1000],b[1000];fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);int f[256]={0};for(int i=0;a[i]&&a[i]!='\n';i++)f[(unsigned char)a[i]]++;for(int i=0;b[i]&&b[i]!='\n';i++)f[(unsigned char)b[i]]--;for(int i=0;i<256;i++)if(f[i]){puts("Not Anagram");return 0;}puts("Anagram");
    return 0;
}
