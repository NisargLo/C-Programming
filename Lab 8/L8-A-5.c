#include<stdio.h>
void main() {
     int n=0,oc=0,ec=0,c=1;
     printf("Enter 10 Nnmbers : ");
     while (c<=10)
     {
          scanf("%d",&n);
          if(n%2==0){
               ec++;
          }
          else{
               oc++;
          }
          c++;
     }
     printf("Count of Odd Numbers : %d",oc);
     printf("\nCount of Even Numbers : %d",ec);
}