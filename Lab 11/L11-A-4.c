//Calculate 𝑥𝑦 without using power function

#include<stdio.h>
void main() {
     int i,x,y,m=1;
     printf("Enter Base & Power : ");
     scanf("%d %d",&x,&y);
     for(i=1;i<=y;i++){
          m=m*x;
     }
     printf("Answer = %d",m);
}