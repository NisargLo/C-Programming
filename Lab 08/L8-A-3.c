//Print numbers between two given numbers which is divisible by 2

#include<stdio.h>
void main() {
     int a,b;
     printf("Enter 2 NO. : ");
     scanf("%d %d",&a,&b);
     while(a<b) {
           a++;
          if(a%2==0 && a!=b){
               printf("\n%d",a);
          }
     }
}