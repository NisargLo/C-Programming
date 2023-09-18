#include<stdio.h>
void main() {
     int n=0,i=1,s;
     printf("Enter Number : ");
     scanf("%d",&n);
     while(i<=n) {
          s=s+i;
          i++;
     }
     printf("Sum of 1 to %d number = %d",n,s);
}