//Find factorial of the given number

#include<stdio.h>
void main() {
     int n,i,m=1;
     printf("Enter NO. : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
          m=i*m;
     }
     printf("%d! = %d",n,m);
}