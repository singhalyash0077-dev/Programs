/*
Q91 - Strings
Remove all vowels from a string.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(!strchr("aeiouAEIOU",s[i]))putchar(s[i]);
    return 0;
}
