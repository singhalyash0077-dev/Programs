/*
Q127 - File Handling
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *in=fopen("input.txt","r"),*out=fopen("output.txt","w");if(!in||!out){puts("Could not open input.txt/output.txt");if(in)fclose(in);if(out)fclose(out);return 1;}int c;while((c=fgetc(in))!=EOF)fputc(toupper((unsigned char)c),out);fclose(in);fclose(out);puts("Converted text written to output.txt");
    return 0;
}
