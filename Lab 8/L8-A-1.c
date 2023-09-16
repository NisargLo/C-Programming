#include<stdio.h>
void main() {
     printf("1 2 3 4 5 6 7 8 9 10");
     int n=1,c=1;
     printf("\nEnter NO. : ");
     scanf("%d",&n);
     while(c!=n){
          if(c<=(n-1)){
               printf("\n%d",n);
               n++;
          }
          c++;
     }
}