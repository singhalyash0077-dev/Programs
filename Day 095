#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

/* Precondition: n >= 1 and n valid student records follow. */
struct Student findTopStudent(int n)
{
    struct Student top;

    scanf("%49s %d %d", top.name, &top.roll, &top.marks);

    for (int i = 1; i < n; i++) {
        struct Student current;
        scanf("%49s %d %d", current.name, &current.roll, &current.marks);

        if (current.marks > top.marks)
            top = current;
    }

    return top;
}

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 1)
        return 1;

    struct Student top = findTopStudent(n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}
