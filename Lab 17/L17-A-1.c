//Print value and address of a variable

#include<stdio.h>
void main() {
     int n;
     printf("Enter NO. : ");
     scanf("%d",&n);
     int *p1;
     p1=&n;
     printf("\nValue = %d",n);
     printf("\nAddress of %d = %d",n,p1);
}