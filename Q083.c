/*
Q83 - Strings
Count vowels and consonants in a string.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int v=0,c=0;for(int i=0;s[i];i++){char x=tolower((unsigned char)s[i]);if(isalpha((unsigned char)x)){if(strchr("aeiou",x))v++;else c++;}}printf("Vowels = %d\nConsonants = %d\n",v,c);
    return 0;
}
