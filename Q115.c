/*
Q115 - Logic Enhancers
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>

int main(void) {
    char a[1000],b[1000];scanf("%999s%999s",a,b);int f[26]={0};for(int i=0;a[i];i++)f[a[i]-'a']++;for(int i=0;b[i];i++)f[b[i]-'a']--;for(int i=0;i<26;i++)if(f[i]){puts("Not Anagram");return 0;}puts("Anagram");
    return 0;
}
