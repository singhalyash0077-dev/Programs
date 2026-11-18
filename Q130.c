/*
Q130 - File Handling
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/
#include <stdio.h>

int main(void) {
    int n;scanf("%d",&n);FILE *f=fopen("students.txt","w");if(!f)return 1;for(int i=0;i<n;i++){char name[100];int roll;double marks;scanf("%99s%d%lf",name,&roll,&marks);fprintf(f,"%s %d %.2f\n",name,roll,marks);}fclose(f);f=fopen("students.txt","r");char name[100];int roll;double marks;while(fscanf(f,"%99s%d%lf",name,&roll,&marks)==3)printf("Name: %s, Roll: %d, Marks: %.2f\n",name,roll,marks);fclose(f);
    return 0;
}
