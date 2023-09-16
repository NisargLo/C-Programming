#include<stdio.h>
#include<math.h>
void main() {
     float n=0,a;
     while(n>=0 && n<=9) {
          a=sqrt(n);
          printf("\nSquare Root of %f = %f",n,a);
          n++;
     } 
}