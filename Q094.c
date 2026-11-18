/*
Q94 - Strings
Find the longest word in a sentence.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];fgets(s,sizeof s,stdin);char *tok=strtok(s," \t\n"),best[1000]="";while(tok){if(strlen(tok)>strlen(best))strcpy(best,tok);tok=strtok(NULL," \t\n");}puts(best);
    return 0;
}
