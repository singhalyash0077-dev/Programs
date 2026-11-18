/*
Q122 - File Handling
Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
*/
#include <stdio.h>

int main(void) {
    FILE *f=fopen("info.txt","r");if(!f){perror("info.txt");return 1;}char line[1000];while(fgets(line,sizeof line,f))fputs(line,stdout);fclose(f);
    return 0;
}
