//Prime No.

#include<stdio.h>
void main() {
     int n,i=1,c=0;
     printf("Enter Number : ");
     scanf("%d",&n);
     while(i<=n/2){
          if(n%i==0){
               c++;
          }
          i++;
     }
     if(c==1){
          printf("Prime");
     }
     else{
          printf("Not Prime");
     }
}