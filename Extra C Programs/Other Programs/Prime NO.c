//Prime NO. or not

#include<stdio.h>
void main() {
     int n=0,i=1,c;
     printf("Enter Number : ");
     scanf("%d",&n);
     while(i<=n){
          if(n%i==0){
               c++;
          }
          i++;
     }
     if(c==2){
          printf("Prime");
     }
     else {
          printf("Not Prime");
     }
}