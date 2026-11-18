/*
Q92 - Strings
Find the first repeating lowercase alphabet in a string.
*/
#include <stdio.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);int f[26]={0};for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z'){int k=s[i]-'a';if(f[k]){printf("%c\n",s[i]);return 0;}f[k]++;}puts("No repeating lowercase alphabet");
    return 0;
}
