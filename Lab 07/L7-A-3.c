#include<stdio.h>
void main() {
     char o;
     float a,b;
     printf("Enter Mathematical Operation : ");
     scanf("%c",&o);
     printf("Enter 2 Integral Numbers : ");
     scanf("%f %f",&a,&b);
     switch(o) {
          case '+': printf("Addition of both numbers is %f",a+b);
          break;
          case '-': printf("Substraction of both numbers is %f",a-b);
          break;
          case '*': printf("Multiplication of both numbers is %f",a*b);
          break;
          case '/': printf("Division of both numbers is %f",a/b);
          break;
          default : printf("Invalid Operator");
     }
}