/*
Q89 - Strings
Count frequency of a given character in a string.
*/
#include <stdio.h>

int main(void) {
    char s[1000],ch;fgets(s,sizeof s,stdin);scanf(" %c",&ch);int c=0;for(int i=0;s[i];i++)if(s[i]==ch)c++;printf("%d\n",c);
    return 0;
}
