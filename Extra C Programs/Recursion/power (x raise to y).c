#include<stdio.h>
int power(int x,int y);
void main(){
     int x,y,result;
     printf("Enter Base & Exponent : ");
     scanf("%d %d",&x,&y);
     result=power(x,y);
     printf("Power = %d",result);
}
int power(int x,int y){
     if(y==1){
          return x;
     }
     else{
          return x*power(x,y-1);
     }
}