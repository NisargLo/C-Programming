//Calculate 𝑥𝑦 without using power function and without using multiplication.

#include<stdio.h>
void main() {
     int i,j,b,e,x,ans;
     printf("Enter Base & Exponent : ");
     scanf("%d %d",&b,&e);
     ans=b;
     x=b;
     for(i=1;i<e;i++){
          for(j=1;j<b;j++){
               ans=ans+x;
          }
          x=ans;
     }
     printf("Answer = %d",ans);
}