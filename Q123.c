/*
Q123 - File Handling
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[256];scanf("%255s",name);FILE *f=fopen(name,"r");if(!f){perror(name);return 1;}long long chars=0,words=0,lines=0;int c,in=0,last='\n';while((c=fgetc(f))!=EOF){chars++;if(c=='\n')lines++;if(isspace(c))in=0;else if(!in){words++;in=1;}last=c;}if(chars&&last!='\n')lines++;fclose(f);printf("Characters = %lld\nWords = %lld\nLines = %lld\n",chars,words,lines);
    return 0;
}
