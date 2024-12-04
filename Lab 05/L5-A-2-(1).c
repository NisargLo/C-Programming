//Swap two numbers. (Using temporary variable and without using temporary variable)

#include<stdio.h>
void main (){
     float a,b,temp;
     printf("\nEnter a");
      scanf("%f",&a);
     printf("\nEnter b");
     scanf("%f",&b);
     temp=a;
     a=b;
     b=temp;
     printf("Swap of 2 NO. is %f %f",a,b);
}