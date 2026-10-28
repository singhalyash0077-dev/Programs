/* Day 76 | 28 October 2026 | Question 1 */
/*
Q126 - File Handling
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
#include <stdio.h>

int main(void) {
    char name[256];scanf("%255s",name);FILE *f=fopen(name,"r");if(!f){puts("File does not exist or cannot be opened.");return 1;}int c;while((c=fgetc(f))!=EOF)putchar(c);fclose(f);
    return 0;
}
