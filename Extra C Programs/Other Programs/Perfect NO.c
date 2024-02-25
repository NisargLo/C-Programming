//Perfect Number

#include<stdio.h>
void main() {
     int n=0,i=1,s=0;
     printf("Enter NO. : ");
     scanf("%d",&n);
     while(i<n) {
          if(n%i==0){
               s=s+i;
          }
          i++;
     }
     if(s==n){
          printf("Perfect Number");
     }
     else{
          printf("Not a Perfect Number");
     }
}