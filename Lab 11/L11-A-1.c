#include<stdio.h>
void main() {
     int n=0,i;
     for(i=1; i<=10; i++){
          printf("\n%d",i);
     }
     printf("\nEnter Number : ");
     scanf("%d",&n);
     for(i=1; i<=n; i++){
          printf("\n%d",i);
     }
}