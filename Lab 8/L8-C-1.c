#include<stdio.h>
#include<math.h>
void main() {
     int a=1,c=1,s;
     while(c<=10){
          s=pow(a,2);
          printf("\nSquare of %d is %d",a,s);
          a++;
          c++;
     }
}