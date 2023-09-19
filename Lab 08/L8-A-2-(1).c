#include<stdio.h>
void main() {
     int n,i=1;
     printf("Enter Number : "); 
     scanf("%d",&n);
     printf("\nOdd Numbers from 1 to %d are  ",n);
     do{
          printf("%d ",i);
          i=i+2;
     } while(i<=n);
}