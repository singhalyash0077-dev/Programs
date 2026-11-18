/* Day 74 | 26 October 2026 | Question 1 */
/*
Q124 - File Handling
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>

int main(void) {
    char src[256],dst[256];scanf("%255s%255s",src,dst);FILE *a=fopen(src,"r");if(!a){perror(src);return 1;}FILE *b=fopen(dst,"w");if(!b){perror(dst);fclose(a);return 1;}int c;while((c=fgetc(a))!=EOF)fputc(c,b);fclose(a);fclose(b);puts("Copied successfully.");
    return 0;
}
