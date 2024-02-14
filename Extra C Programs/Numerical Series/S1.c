//Write a program to find sum of first N odd numbers. Ex. 1+3+5+7+………..+N

#include<stdio.h>
void main() {
     int n,i,s=0,a=1;
     printf("Enter NO. : ");
     scanf("%d",&n);
     for(i=1;i<=n;i+=2){
          s=s+a;
          a+=2;
     }
     printf("Sum of Odd NO. till %d = %d",n,s);
} 