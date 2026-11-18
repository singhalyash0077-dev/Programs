/*
Q90 - Strings
Toggle case of each character in a string.
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++){if(islower((unsigned char)s[i]))s[i]=toupper((unsigned char)s[i]);else if(isupper((unsigned char)s[i]))s[i]=tolower((unsigned char)s[i]);}printf("%s",s);
    return 0;
}
