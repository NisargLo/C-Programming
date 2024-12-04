//Print 1 to 10 then modify program Print 1 to n using while and do while loop

#include<stdio.h>
void main() {
     int n=0,i=1,c=1;
     while(i<=10){
          printf("%d ",i);
          i++;
     }
     printf("\nEnter Number : ");
     scanf("%d",&n);
     printf("Numbers from 1 to %d are : ",n);
     do{
          printf("%d ",c);
          c++;
     } while(c<=n);
}