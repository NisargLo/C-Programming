//Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5.

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