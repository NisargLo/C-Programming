//Check for equality of two numbers without using arithmetic or comparison operator.

#include<stdio.h>
void main() {
     int a,b;
     printf("Enter 2 Numbers : ");
     scanf("%d %d",&a,&b);
     //(a^b) = 1, then not equal
     if(a^b) {
          printf("Not Equal");
     }
     else{
          printf("Equal");
     }
}