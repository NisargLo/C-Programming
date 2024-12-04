//Print multiplication table of a given number

#include<stdio.h>
void main() {
     int n,i,m;
     printf("Enter Number : ");
     scanf("%d",&n);
     printf("Multiplication Table : ");
     for(i=1;i<=10;i++){
          m=i*n;
          printf("\n%d x %2d = %d",n,i,m);
     }
}