//Find all prime numbers between given interval using functions

#include<stdio.h>
void prime(int,int);
void main(){
     int a,b;
     printf("Enter NO. 1 : ");
     scanf("%d",&a);
     printf("Enter NO. 2 : ");
     scanf("%d",&b);
     prime(a,b);
}
void prime(int a,int b){
     int i,j,c;
     for(i=a;i<=b;i++){
          c=0;
          for(j=2;j<=i/2;j++){
               if(i%j==0){
                    c=1;
               }
          }
          if(c==0){
               printf("%d, ",i);
          }
     }
}