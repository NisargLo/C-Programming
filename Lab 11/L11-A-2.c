//Print sum of 1 to n numbers

#include<stdio.h>
void main() {
     int n,i,s=0;
     printf("Enter Number : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
          s=s+i;
     }
     printf("Sum of 1 to %d = %d",n,s);
}