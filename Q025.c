/*
Q25 - Conditional Statements
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include <stdio.h>

int main(void) {
    double a,b; char op; scanf("%lf %c %lf",&a,&op,&b); switch(op){case '+':printf("%.2f\n",a+b);break;case '-':printf("%.2f\n",a-b);break;case '*':printf("%.2f\n",a*b);break;case '/':if(b)printf("%.2f\n",a/b);else puts("Division by zero");break;case '%':if((long long)b)printf("%lld\n",(long long)a%(long long)b);else puts("Division by zero");break;default:puts("Invalid operator");}
    return 0;
}
