#include<stdio.h>
void main() {
     int n=100,a;
     printf("Numbers are :");
     while(n>=100 && n<=200) {
          if(n%7==0 && n%5!=0){
               printf("\n%d",n);
          }
          n++;
     }
}