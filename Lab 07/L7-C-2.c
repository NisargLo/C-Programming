#include<stdio.h>
void main() {
     int a;
     printf("Enter Month : ");
     scanf("%d",&a);
     switch(a)
     {
          case 1 : 
          case 3 :
          case 5 :
          case 7 :
          case 8 :
          case 10 :
          case 12 : printf("31 Days");
          break;
          case 2 : printf("29 Days");
          break;
          default : printf("30 Days");
     }
}