//Decimal to Binary

#include<stdio.h>
int d_b(int n){
     if(n==0){
          return 0;
     }
     else{
          return(n%2 + 10*d_b(n/2));
     }
}
void main() {
     int n,bin;
     printf("Enter Decimal NO. : ");
     scanf("%d",&n);
     bin=d_b(n);
     printf("Binary = %d",bin);
}