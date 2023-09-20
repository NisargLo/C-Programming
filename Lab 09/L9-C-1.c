#include<stdio.h>
void main() {
     int n,r,store=0,a;
     printf("Enter Number : ");
     scanf("%d",&n);
     a=n;
     while(a>0){
          r=a%10;
          store=(store*10)+r;
          a=a/10;
     }
     while(store>0) {
          r=store%10;
          switch(r){
               case 0: printf("Zero ");
               break;
               case 1: printf("One ");
               break;              
               case 2: printf("Two ");
               break;
               case 3: printf("Three ");
               break;
               case 4: printf("Four ");
               break;
               case 5: printf("Five ");
               break;
               case 6: printf("Six ");
               break;
               case 7: printf("Seven ");
               break;
               case 8: printf("Eight ");
               break;
               case 9: printf("Nine ");
               break;
               default: printf("Invalid ");
          }
          store=store/10;
     }
}