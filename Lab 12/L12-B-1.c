//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + … + (1+2+3+4+…+n)

#include<stdio.h>
void main() {
     int n,i=0,j,s1,s2=0;
     printf("Enter Number : ");
     scanf("%d",&n);
     for(i=n;i>0;i--){
          s1=0;
          for(j=1;j<=i;j++){
               s1=s1+j;
          }
          s2=s2+s1;
     }
     printf("Sum = %d",s2);
}