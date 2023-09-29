//Print the Fibonacci Series

#include<stdio.h>
void main() {
     int n,i,s=0,a=0,b=1;
     printf("Enter Number : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++) {
         if(s==0){
          printf("%d, ",s);
         }
         else if(s==1){
          printf("%d, ",s);
         }
         else{
          s=s+s;
         }
         s++;
     }
}