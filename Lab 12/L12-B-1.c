//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + … + (1+2+3+4+…+n)

#include<stdio.h>
void main() {
     int n,i,j=0,s1,s2=0;
     printf("Enter Number : ");
     scanf("%d",&n);
     for(j=n;j>0;j--){
          s1=0;
          for(i=1;i<=j;i++){
               s1=s1+i;
          }
          s2=s2+s1;
     }
     printf("%d",s2);
}