//Print first 50 numbers in series 1, 4, 7, 10…

#include<stdio.h>
void main() {
     int a=1,c=1;
     while(c<=50) {
          printf("\n%d",a);
          a=a+3;
          c++;
     }
}