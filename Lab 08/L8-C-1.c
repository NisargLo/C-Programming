//Calculate the square of integers 1 through 10.

#include<stdio.h>
#include<math.h>
void main() {
     int a=1,c=1,s;
     while(c<=10){
          s=(a*a);
          printf("\nSquare of %d is %d",a,s);
          a++;
          c++;
     }
}