//Decimal to Binary using array

#include<stdio.h>
void main() {
     int a[32],r,i,n;
     printf("Enter NO. : ");
     scanf("%d",&n);
     for(i=0;i<32;i++) {
          a[i]=0;
     }
     for(i=0;n!=0;i++){
          r=n%2;
          n=n/2;
          a[i]=r;
     }
     for(i=31;i>=0;i--){
          printf("%d ",a[i]);
     }
}