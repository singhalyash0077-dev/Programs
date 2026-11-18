/*
Q3 - User Inputs, Operations & Output
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <stdio.h>

int main(void) {
    double l,b; scanf("%lf%lf",&l,&b); printf("Area = %.2f\nPerimeter = %.2f\n",l*b,2*(l+b));
    return 0;
}
