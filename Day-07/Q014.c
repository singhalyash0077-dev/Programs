/* Day 7 | 20 August 2026 | Question 2 */
/*
Q14 - Conditional Statements
Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char c; scanf(" %c",&c); c=tolower((unsigned char)c); if(c>='a'&&c<='z') puts(strchr("aeiou",c)?"Vowel":"Consonant"); else puts("Not an alphabet");
    return 0;
}
