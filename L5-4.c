#include<stdio.h>
void main(){
     int a,b,c;
     printf("Enter a,b,c");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
      if(a>b){
      }
      else if(b>c){
            printf("B is largest");
      }
      else if(a>c){
            printf("A is largest");
      }
      else{
            printf("C is largest");
      }
}