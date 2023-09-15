#include<stdio.h>
void main() {
     int a,b,c,d;
     printf("Enter 3 Numbers : ");
     scanf("%d %d %d",&a,&b,&c);
     switch (a>b)
     {case (0) : d=c*b;
               printf("Multiplication is %d",d);
          break;
      case (1) : d=c*a;
               printf("Multiplication is %d",d);
          break;
     default: printf("Invalid");
     }
}