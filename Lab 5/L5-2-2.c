#include<stdio.h>
void main (){
     float a,b,temp;
     printf("\nEnter a");
     scanf("%f",&a);
     printf("\nEnter b");
     scanf("%f",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("Swap of 2 NO. is %f %f",a,b);
}