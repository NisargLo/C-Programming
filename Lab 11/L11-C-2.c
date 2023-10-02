//Calculate 𝑥𝑦 without using power function and without using multiplication.

#include<stdio.h>
void main() {
     int i,b,e,a=0,j,c=0;
     printf("Enter Base & Exponent : ");
     scanf("%d %d",&b,&e);
     for(i=1;i<=e;i++){
     for(j=1;j<=b;j++){
          a=a+b;
     }
     printf("\na=%d",a);
     }
     printf("\nc=%d",c);
}