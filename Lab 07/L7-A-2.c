//Print number of days in a month using switch

#include<stdio.h>
void main() {
     int a;
     printf("Enter Month : ");
     scanf("%d",&a);
     switch(a){
          case 1:
          case 3:
          case 5:
          case 7:
          case 8:
          case 10:
          case 12: printf("31 Days");
          break;
          case 2: printf("28 Days");
          break;
          case 4:
          case 6:
          case 9:
          case 11: printf("30 Days");
          break;
          default: printf("Invalid");
     }
}