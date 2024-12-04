//Convert decimal number to binary. (i.e. n=11  output: 1011)

#include<stdio.h>
void main() {
     int n,c=31;
     printf("Enter NO. : ");
     scanf("%d",&n);
     printf("%d in Binary = ",n);
     while(c>=0){
          if((n>>c)&1==1){
               printf("1 ");
          }
          else{
               printf("0 ");
          }
          c--;
     }
}