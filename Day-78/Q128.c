/* Day 78 | 30 October 2026 | Question 1 */
/*
Q128 - File Handling
Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char name[256];scanf("%255s",name);FILE *f=fopen(name,"r");if(!f){perror(name);return 1;}int c,v=0,co=0;while((c=fgetc(f))!=EOF){if(isalpha((unsigned char)c)){c=tolower((unsigned char)c);if(strchr("aeiou",c))v++;else co++;}}fclose(f);printf("Vowels = %d\nConsonants = %d\n",v,co);
    return 0;
}
