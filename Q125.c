/*
Q125 - File Handling
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/
#include <stdio.h>

int main(void) {
    char name[256],line[1000];scanf("%255s",name);getchar();fgets(line,sizeof line,stdin);FILE *f=fopen(name,"a");if(!f){perror(name);return 1;}fputs(line,f);fclose(f);puts("Appended successfully.");
    return 0;
}
